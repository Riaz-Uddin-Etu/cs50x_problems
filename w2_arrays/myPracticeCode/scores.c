#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

// const
const int N = 3;

int main(void)
{

    int scores[N];

    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Enter score: ");
    }

    // Average
    printf("Average: %f\n", average(N, scores));
}


// Functions
float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}






// Compute average
// A set of values -- array[]
// Number of values -- length

















// each integer (like scores*) takes 4 bytes in memory
// Arrays are a sequence of values that are stored back-to-back in memory.


/*
Notice that score[0] examines the value at this location
of memory by indexing into the array called scores at
location 0 to see what value is stored there.
*/
