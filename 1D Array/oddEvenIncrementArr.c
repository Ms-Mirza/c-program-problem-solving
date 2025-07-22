#include<stdio.h>
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    for (int i=0; i<6; i++)
    {
        if (arr[i]%2 != 0)
        {
            arr[i] += 10;
        }
        printf("%d ", arr[i]);
    }
    return 0;
}