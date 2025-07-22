// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the array size: ");
//     scanf("%d", &n);
//     int arr[n];
//     int arr1[n];
//     for (int i=0; i<n; i++) 
//     {
//         printf("Enter element for %d th index: ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("The original array is: ");
//     for (int i=0; i<n; i++)
//     {
//         printf("%d ", arr[i]); // Printing the original array
//     }
//     printf("\nThe copied array in reverse order is: ");
//     for (int i=0; i<n; i++)
//     {
//         arr1[i] = arr[5-i-1]; // Copying elements in reverse order
//         printf("%d ", arr1[i]); // Printing the copied array
//     }
//     return 0;
// }

// reverse array without using another array

#include<stdio.h>
void reverse_array(int arr[], int n)
{
    int i = 0, j = n-1;         // we can also use for loop
                                // for (int i=0, j=6; i<j; i++, j--){int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;}
        arr[i] = arr[j];
        arr[j] = temp;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) 
    {
        printf("Enter element for %d th index: ", i);
        scanf("%d", &arr[i]);
    }
    reverse_array(arr, n);
    printf("\nThe original array in reverse order is: "); 
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]); // Printing the reversed array
    }
    
    return 0;
}