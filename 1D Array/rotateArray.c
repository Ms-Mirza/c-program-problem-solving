// #include<stdio.h>
// int main()
// {
//     int arr[7] = {1,2,3,4,5,6,7}, k =2;
//     for (int i=(7-k)%7, j=6; i<j; i++, j--)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     printf("The rotated array is: ");
//     for (int i=0; i<7; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// code for user input of rotation and array size
#include<stdio.h>

void rotateArray(int arr[],int n, int k)
{
    for (int i=n, j= k; i<j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int n, k;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        printf("Enter the elements of %d th index: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of rotations: ");
    scanf("%d", &k); 
    k = k % n;
    rotateArray(arr, 0, n-1);
    rotateArray(arr, 0, k-1);
    rotateArray(arr, k, n-1);
    printf("The rotated array is: ");
    for (int i=0; i<n; i++)
    { 
        printf("%d ", arr[i]);
    } 
    
    return 0;
}