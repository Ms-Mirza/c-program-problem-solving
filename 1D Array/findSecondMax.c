#include<stdio.h>
#include<limits.h>
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
    // int max = arr[0];
    // for (int i=0; i<n; i++)
    // {
    //     if (arr[i]> max)
    //     {
    //         max = arr[i];
    //     }
    // }
    // int smax = arr[0];
    // for (int i=0; i<n; i++)
    // {
    //     if (arr[i] != max && arr[i] > smax)
    //     {
    //         smax = arr[i];
    //     }
    // }
    int max =INT_MIN , smax = INT_MIN;
    for (int i=0; i<n; i++)
    {
        if (arr[i] > max)
        {
            smax = max; // Update second max before updating max
            max = arr[i]; // Update max
        }
        else if (smax < arr[i] && max != arr[i])
        {
            smax = arr[i]; // Update second max if current element is less than max but greater than smax
        }
    }
    printf("The second maximum element in the array is %d\n", smax);
    return 0;
}