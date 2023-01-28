// find the minimum and maximum elements from an array (*without user input)

#include <stdio.h>
int main()
{
    int i; // 'i' for 'for loop'
    int min, max;
    int array[5] = {3, 32, 4, 6, 78};

    min = array[0]; // initializing array first element as nminimum
    max = array[0]; // initializing array first element as nmaximum

    for (i = 1; i < 5; i++) // loop for traverse the array idex 1 to size, because index 0 is nminimum & nmaximum
    {
        if (array[i] < min)
        {
            min = array[i];
        }

        if (array[i] > max)
        {
            max = array[i];
        }
    }

    printf("\nminimum number is %d ", min);
    printf("\nmaximum number is %d ", max);
}
