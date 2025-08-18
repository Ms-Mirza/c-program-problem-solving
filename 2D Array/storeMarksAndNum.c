//// C program to store roll numbers and marks of students in a 2D array

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of students: ");
//     scanf("%d", &n);
//     int marks[n][2];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter roll and mark for student %d: ", i + 1);
//         scanf("%d %d", &marks[i][0], &marks[i][1]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("Roll: %d, Mark: %d\n", marks[i][0], marks[i][1]);
//     }
// }


// print same number in the whole array


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the number to fill the array: ");
    int num;
    scanf("%d", &num);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = num;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}
