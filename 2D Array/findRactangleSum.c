//Given matrix, find sum of rectangle formed by 2 coordinates (l1,r1) and (l2,r2)

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
    int start_row, start_col, end_row, end_col;
    printf("Enter the start row index: ");
    scanf("%d", &start_row);
    printf("Enter the start col index: ");
    scanf("%d", &start_col);
    printf("Enter the end row index: ");
    scanf("%d", &end_row);
    printf("Enter the end col index: ");
    scanf("%d", &end_col);
    for (int i = 0; i < row; i++)
    {
        for (int j=start_col; j<=end_col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    int sum =0;
    for (int i = 0; i < row; i++)
    {
        for (int j=start_col; j<=end_col; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("The sum of the rectangle formed by 2 coordinates (%d,%d) and (%d,%d) is: %d", start_row, start_col, end_row, end_col, sum);
    
}
