/*
#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) // take input from the user for the array elements
    {
        printf("Enter element for %d th index: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i= n-1; i>=0; i--) // print the array in reverse order.
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/

#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=1; i<=n; i++)
    {
        printf("Enter the marks for roll %d : ", i);
        scanf("%d", &arr[i]); 
    }
    for (int i=1; i<=n; i++){
        if (arr[i]<35){
            printf("Roll %d has failed with marks %d\n", i, arr[i]);
        }
    }
}