// C program to check if an array is a palindrome
// #include<stdio.h>
// int main()
// {
//     int arr[7] = {1,2,3,4,5,2,1};
//     for (int  i=0, j=6; i<j; i++, j--)
//     {
//         if (arr[i]== arr[j]) continue;
//         else 
//         {
//             printf("Not a palindrome\n");
//             return 0;
//         }
//     }
//     printf("The array is a palindrome\n");
//     return 0;
// }

// for user input:

#include<stdio.h>
int isPalindrom(int arr[], int n)
{
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        if (arr[i] != arr[j]) return 0; // Not a palindrome
    }
    return 1; // Is a palindrome
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
    if(isPalindrom(arr, n)) printf("The array is a palindrome\n");
    else printf("Not a palindrome\n");
    return 0;
}