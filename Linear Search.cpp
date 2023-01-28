// linear search
#include <stdio.h>
int main()
{
    int a[5] = {23, 43, 3, 9, 2};
    int i, item;

    printf("Enter the number which you want to search\n");
    scanf("%d", &item);

    while(i<5)// for traverse the array
    {
        if (a[i] == item)
        {
            printf("Item found location =%d", i);
            break;
        }

    i++;
    if(i>=5)
        {
            printf("Element not found");
        }
    }
}


