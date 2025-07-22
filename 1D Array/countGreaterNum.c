#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,3,9,10};
    int count = 0;
    for (int i=0; i<10; i++)
    {
        if (arr[i]> 4)
        {
            count +=1;
            printf("%d ", arr[i]);
        }
    }
    printf("\nCount of numbers greater than 4 is  %d\n", count);
    return 0;
}