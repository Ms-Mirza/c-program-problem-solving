// SPIRAL printing

#include<stdio.h>
int main()
{
    int row, col;
    printf("Enter the row size: ");
    scanf("%d", &row);
    printf("Enter the col size: ");
    scanf("%d", &col);
    
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element (%d,%d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("The matrix is:\n");
    
    for (int i = 0; i < row; i++)
    {
        for (int j=0; j<col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe spiral formation:\n");
    int min_row = 0, max_row = row-1, min_col = 0, max_col = col-1, total_elements=(row*col), count = 0;
    while(count<total_elements)
    {
        // checking boundaries after each loop
        // After each direction, you must check if count < total_elements.
        // Otherwise, when the spiral collapses inward, you might print the same row/column multiple times.

        
        // print minimum row
        for (int j=min_col; j<=max_col && count<total_elements; j++) //
        {
            printf("%d ", arr[min_row][j]);
            count++;
        }
        min_row++;
        // print maximum colum
        for (int i=min_row; i<=max_row && count<total_elements; i++)
        {
            printf("%d ", arr[i][max_col]);
            count++;
        }
        max_col--;
        // print maximum row
        for (int j=max_col; j>=min_col && count<total_elements; j--)
        {
            printf("%d ", arr[max_row][j]);
            count++;
        }
        max_row--;
        // print minimum colum
        for (int i=max_row; i>=min_row && count<total_elements; i--)
        {
            printf("%d ", arr[i][min_col]);
            count++;
        }
        min_col++;
    }

    return 0;
}



