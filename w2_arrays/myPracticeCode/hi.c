#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";


    // both strings are stored within a single array of type string.
    printf("%c%c\n", words[0][0], words[0][1]);
    printf("%c%c%c%c %i\n", words[1][0], words[1][1], words[1][2], words[1][3], words[1][4]);

    // printf("%i %i %i %i, %i, %i\n", s[0], s[1], s[2], s[3], s[4], s[5]);
}


/*
string is an array of characters that begins with the first character and
ends with a special character called a NUL character
*/
