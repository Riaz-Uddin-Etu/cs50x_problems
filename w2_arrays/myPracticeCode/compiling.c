#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name? ");
    printf("Hello, %s\n", name);
}


// Command line
// command line arguments
// clang -o compiling compiling -lcs50


/*
The make command is a tool that automates the process of compiling code.
In CS50, make is configured to use clang to compile your C programs.
When you run make compiling, it looks for a file named compiling.c and
compiles it into an executable named compiling.
It also links any necessary libraries, like -lcs50 for the CS50 library.
*/
