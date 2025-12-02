#include <stdio.h>
#include <string.h>

int const size = 5;

int main(void)
{
    // Declare an array
    int numbers[size];

    // Populate the array

    printf("numbers list - start from 1 and then 2 times than previous number: ");

    numbers[0] = 1;

    for (int i = 1; i < size; i++)
    {
        numbers[i] = numbers[i - 1] * 2;
    }

    // print out the values one by one
    for (int i = 0; i < size; i++)
    {
        printf("%i ", numbers[i]);
    }

    printf("\n");
}
