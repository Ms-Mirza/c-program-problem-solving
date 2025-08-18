// Find the row with the maximum sum in a matrix
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
    printf("The 2D array is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    int maxSum=0, maxSumRow=0;
    for (int i=0; i<row; i++)
    {
        int sum=0;
        for (int j=0; j<col; j++)
        {
            sum += arr[i][j];
        }
        if(maxSum<sum)
            {
                maxSum = sum;
                maxSumRow = i;
            }      
    }
    printf("The row with the maximum sum in the matrix is: %d\nAnd the maximum sum is: %d",maxSumRow, maxSum);
}