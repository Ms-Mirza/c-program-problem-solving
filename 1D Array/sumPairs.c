/// This code finds pairs of elements in an array that sum to a given value x.

// #include<stdio.h>
// int main()
// {
//     int n, x, count = 0;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i=0; i<n; i++)
//     {
//         printf("Enter the element for %d th index: ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the value of x: ");
//     scanf("%d", &x);
//     for (int i=0; i<n; i++)
//     {
//         for (int j=i+1; j<n; j++)
//         {
//             if (arr[i]+arr[j]==x)
//             {
//                 printf("The pair of elements that sum is equal to %d is: (%d, %d)\n", x, arr[i], arr[j]);
//                 count ++;
//             }
//         }
//     }
//     printf("Total number of pairs found: %d\n", count);
//     return 0;
// }


/// This code finds triplets of elements in an array that sum to a given value x.
#include<stdio.h>
int main()
{
    int n, x, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        printf("Enter the element for %d th index: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of x: ");
    scanf("%d", &x);
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            for (int k=j+1; k<n; k++)
            {    
                if (arr[i]+arr[j]+arr[k]==x)
                {
                    printf("The triple of elements that sum is equal to %d is: (%d, %d, %d)\n", x, arr[i], arr[j], arr[k]);
                    count ++;
                }
            }
        }
    }
    printf("Total number of triples found: %d\n", count);
    return 0;
}