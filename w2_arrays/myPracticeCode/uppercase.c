#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Enter name: ");

    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (islower(name[i]))
        {
            printf("%c", toupper(name[i]));  // convert to each character -- so %c
        }
        else
        {
            printf("%c", name[i]);
        }
    }
    printf("\n");
}
