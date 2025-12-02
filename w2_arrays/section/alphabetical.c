#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    string text = get_string("input a text \n");

    for (int i = 1, length = strlen(text); i < length; i++)
    {
        if (text[i] < text[i - 1])
        {
            printf("No\n");
            return 0; // exit the code
        }
    }
    printf("yes\n");
}
/*
return 0; inside main() doesn’t magically “kill” the program.
It simply hands a message back to the operating system: “Everything went fine.”
A zero status is the traditional success code. Non-zero means something went wrong
*/
