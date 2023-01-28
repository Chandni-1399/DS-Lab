// stack push pop display
#include <stdio.h>
#include <stdlib.h>
int stack[100], top = -1, n, choice = 0;
int push();
int pop();
int display();
int main()
{
    printf("\nEnter the number of element in stack");
    scanf("\n%d", &n);
    while (choice != 4)
    {
        printf("\nEntet your choice: ");
        printf("\n1.Push\n2.Pop\n3.display\n");

        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            break;
        return 0;
        }
    }
}

int push()
{
    int val;
    if (top == n - 1)
    {
        printf("\nOverFlow");
    }
    else
    {
        printf("\nEnter the value: ");
        scanf("\n%d", &val);
        top += 1;
        stack[top] = val;
    }
}

int display()
{
    if (top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\n**********Printing Stack***********\n");
        for (int i = top; i >= 0; i--)
        {
            printf("\n%d\n", stack[i]);
        }
    }
}

int pop()
{
    if (top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        top -= 1;
        printf("\nPopped\n");
    }
}

