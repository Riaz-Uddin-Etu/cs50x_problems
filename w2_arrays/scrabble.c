#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Creates the array of points values
int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute(string pword);

int main(void)
{
    // Promts the user for player 1 and 2
    string p1_word = get_string("Player 1:");
    string p2_word = get_string("Player 2:");

    // Sum of point values of each letter in the word of both prompts
    int p1_score = compute(p1_word);
    int p2_score = compute(p2_word);

    // print results
    if (p1_score > p2_score)
    {
        printf("Player 1 wins\n");
    }
    else if (p1_score < p2_score)
    {
        printf("Player 2 Wins\n");
    }
    else
    {
        printf("Tie\n");
    }
}

// functions
int compute(string pword)
{
    int sum = 0;
    for (int i = 0; i < strlen(pword); i++)
    {
        if (isupper(pword[i]))
        {
            sum += points[pword[i] - 'A'];
        }
        else if (islower(pword[i]))
        {
            sum += points[pword[i] - 'a'];
        }
    }
    return sum;
}

/*
pword -- player word
*/
