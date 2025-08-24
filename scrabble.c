#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int get_point(string input);

int main(void)
{
    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");
    int a = get_point(p1);
    int b = get_point(p2);

    if (a > b)
    {
        printf("Player 1 wins!\n");
    }
    else if (b > a)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("It's a tie!\n");
    }
}

int get_point(string input)
{

    int score = 0;

    for (int i = 0, n = strlen(input); i < n; i++)
    {

        if (isalpha(input[i]))
        {

            int letter = toupper(input[i]);
            int x = letter - 'A';
            score = score + POINTS[x];
        }
    }

    return score;
}
