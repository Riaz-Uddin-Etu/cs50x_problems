#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int word_counts(string texts);
int letters_counts(string texts);
float _L_(string texts);
int sentences_counts(string texts);
float _S_(string texts);
float compute_index(string texts);

int main(void)
{
    // user prompt for texts
    string usr_inp = get_string("Text: ");

    // Compute the total words
    int num_words = word_counts(usr_inp);

    // Compute the total letters
    int num_letters = letters_counts(usr_inp);

    // Compute the average number of letters per 100 words - L
    float L = _L_(usr_inp);

    // Compute the sentences
    int num_sentences = sentences_counts(usr_inp);

    // Compute the average number of sentences per 100 words - S
    float S = _S_(usr_inp);

    printf("words: %i\nletters: %i\nL: %f\nsentences: %i\nS: %f\n", num_words, num_letters, L,
           num_sentences, S);

    // Compute the index
    // index = 0.0588 * L - 0.296 * S - 15.8

    float index = compute_index(usr_inp);
    printf("index: %f\n", index);

    // Print grade
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index == 15)
    {
        printf("Grade 15\n");
    }
    else if (index == 14)
    {
        printf("Grade 14\n");
    }
    else if (index == 13)
    {
        printf("Grade 13\n");
    }
    else if (index == 12)
    {
        printf("Grade 12\n");
    }
    else if (index == 11)
    {
        printf("Grade 11\n");
    }
    else if (index == 10)
    {
        printf("Grade 10\n");
    }
    else if (index == 9)
    {
        printf("Grade 9\n");
    }
    else if (index == 8)
    {
        printf("Grade 8\n");
    }
    else if (index == 7)
    {
        printf("Grade 7\n");
    }
    else if (index == 6)
    {
        printf("Grade 6\n");
    }
    else if (index == 5)
    {
        printf("Grade 5\n");
    }
    else if (index == 4)
    {
        printf("Grade 4\n");
    }
    else if (index == 3)
    {
        printf("Grade 3\n");
    }
    else if (index == 2)
    {
        printf("Grade 2\n");
    }
    else if (index == 1)
    {
        printf("Grade 1\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}

// Functions

// Compute the total words in the text by counting space

int word_counts(string texts)
{
    int counts =
        1; // counts start from 1 because text's number of space character < number of words
    for (int i = 0; i < strlen(texts); i++)
    {
        if (texts[i] == 32)
        {
            counts++;
        }
    }
    return counts;
}

// Count total letters in texts using isalpha()

int letters_counts(string texts)
{
    int counts = 0;
    for (int i = 0; i < strlen(texts); i++)
    {
        if (isalpha(texts[i]))
        {
            counts++;
        }
    }
    return counts;
}

/*
we have total words from word_counts()
we have total letters from letters_counts()

x words have x letters
1 word has x letters / x words
100 words have (x letters / x words) * 100 words

Equation ---> (x letters / x words) * 100 words
*/

// Compute the average number of letters per 100 words - L

float _L_(string texts)
{
    float L = ((float) letters_counts(texts) / (float) word_counts(texts)) * 100.0;
    return L;
}

/*
First compute the sentences by counting period (full stop)
Then compute the average number of sentences per 100 words

x words have x sentences
1 word has x sentences / x words
100 words have (x sentences / x words) * 100

Equation --> (x sentences / x words) * 100
*/

// Compute the sentences by counting period

int sentences_counts(string texts)
{
    int counts = 0;
    for (int i = 0; i < strlen(texts); i++)
    {
        if (texts[i] == 46 || texts[i] == 63 || texts[i] == 33)
        {
            counts++;
        }
    }
    return counts;
}

// Compute the average number of sentences per 100 words - S

float _S_(string texts)
{
    float S = ((float) sentences_counts(texts) / (float) word_counts(texts)) * 100.0;
    return S;
}

// Compute index

float compute_index(string texts)
{
    float index = round(0.0588 * _L_(texts) - 0.296 * _S_(texts) - 15.8);
    return index;
}
