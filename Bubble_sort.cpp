// buble sort
#include <stdio.h>
int main()
{
    int i, j, array[5] = {7, 8, 3, 1, 2};

    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            // if the element is greater than to it's next element
            if (array[j] > array[j + 1])
            {
                // swap
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // print array
    for (i = 0; i < 5; i++) // here 5 is our array length
    {
        printf("\n%d", array[i]);
    }
}
