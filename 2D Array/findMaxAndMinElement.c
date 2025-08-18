#include<stdio.h>
int main()
{
    int row, col;
    printf("Enter the row size: ");
    scanf("%d", &row);
    printf("Enter the col size: ");
    scanf("%d", &col);
    if (row <= 0 || col <= 0) {
        printf("Invalid size. Please enter a positive integer.\n");
        return 0;
    }
    else{   
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
        int min = arr[0][0], max = arr[0][0];
        for (int i = 0; i < row; i++)
        {
            for (int j=0; j<col; j++)
            {
                if (arr[i][j]< min) min = arr [i][j];
                if (arr[i][j]> max) max = arr [i][j];
            }
        }
        printf("The maximum element is: %d.\nThe minimum element is: %d.\n", max, min);
    }
    return 0;
}
