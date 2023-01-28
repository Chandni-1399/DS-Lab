// find the minimum and maximum elements from an array (*user input)

#include <stdio.h>
int main()
{
    int i, size; // 'i' for 'for loop', size for size of array
    int min, max;

    printf("Enter the size of array ");
    scanf("%d", &size);
    int array[size]; // declear and initializing the array

    for (i = 0; i < size; i++) // for loop for take input from user and store into the array
    {
        printf("\nEnter element of index %d ", i);
        scanf("%d", &array[i]);
    }
    min = array[0]; // initializing array first element as minimum
    max = array[0]; // initializing array first element as maximum

    for (i = 1; i < size; i++) // loop for traverse the array index 1 to size, because index 0 is nminimum & nmaximum
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
