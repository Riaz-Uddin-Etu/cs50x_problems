#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    // Prompt the user for pyramid heights
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // Print the pyramids heights
    for (int i = 0; i < n; i++)
    {
        // Print bricks
        print_row(n, i + 1);
    }
}

// Functions
void print_row(int spaces, int bricks)
{
    // Print spaces before right abgle pyramid
    for (int j = spaces; j > bricks; j--)
    {
        printf(" ");
    }
    // Right angle pyramid
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    // Gap between pyramids
    printf("  ");
    // Left angle pyramid
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
