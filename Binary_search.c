#include<stdio.h>
int main()
{
    int a[] = {2,5,14,26,67,89,100};
    int item = 67;

    int left, right, middle;
    left = 0;
    right = 6;

    while(left <= right)
    {
        middle = (right + left) / 2;
        if(a[middle] == item)
        {
            printf("Item found at index: %d\n",middle);
            getch();
        }
        else if(a[middle] < item)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    printf("Item not found\n");
}
