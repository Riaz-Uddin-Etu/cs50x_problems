#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s ", argv[i]);
    }
    printf("\n");
}


/*
argc, the number of command line arguments
argv, which is an array of the characters passed as arguments at the command line.
*/
