#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int hour[5];
    // hour[0] = 7;
    // hour[1] = 8;
    // hour[2] = 6;
    // hour[3] = 4;
    // hour[4] = 2;

    // Below is similar to above - more simple and cleaner
    int hour[5] = {7,8,6,4,2};

    printf("sat: %i wed: %i\n", hour[0], hour[4]);
}
