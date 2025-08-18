#include<stdio.h>
int main()
{
    int row, col;
    printf("Enter the row size: ");
    scanf("%d", &row);
    printf("Enter the row size: ");
    scanf("%d", &col);
    if (row <= 0 || col <= 0) {
        printf("Invalid size. Please enter a positive integer.\n");
        return 1;
    }
    
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element (%d,%d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\n");
    int arr1[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element (%d,%d): ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("the total of the two matrices is:\n");
    int sum[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j=0; j<col; j++)
        {
            int temp = arr[i][j] + arr1[i][j];
            sum[i][j] = temp;
            
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    int sum1=0;
    printf("The sum of the two matrices is: ");
    for (int i = 0; i < row; i++)
    {
        for (int j=0; j<col; j++)
        {
            sum1 += sum[i][j];
        }
    } 
    printf("%d\n", sum1);
    return 0;
}
