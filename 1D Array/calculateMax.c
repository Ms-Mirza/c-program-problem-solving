#include<stdio.h>
int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        printf("Enter element for %d th index: ",i);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i=0; i<n; i++)
    {
        if (arr[i]> max)
        {
            max = arr[i];
        }
    }
    printf("The maximum element in the array is %d\n", max);
    return 0;
}