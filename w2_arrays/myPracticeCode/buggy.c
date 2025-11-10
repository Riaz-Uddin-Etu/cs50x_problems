#include <cs50.h>
#include <stdio.h>

void columns(int height);

int main(void)
{
    int height = get_int("height: ");
    columns(height);
}

// Functions
void columns(int height)
{
    for (int i = 0; i <= height; i++)
    {
        printf("#\n");
    }
}

