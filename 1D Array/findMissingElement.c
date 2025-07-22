#include<stdio.h>
int main()
{
    int n, sum =0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int total_sum = (n * (n + 1)) / 2; // Sum of first n natural numbers
    int missing_element = total_sum - sum;
    printf("The missing element in the array is: %d\n", missing_element);
    return 0;
}