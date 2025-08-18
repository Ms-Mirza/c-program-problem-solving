// Matrix MULTIPLICATION

#include<stdio.h>
int main()
{
    printf("Enter the first matrix size.\n");
    int row, col;
    printf("Enter the row size: ");
    scanf("%d", &row);
    printf("Enter the colum size: ");
    scanf("%d", &col);
    if (row<0 || col<0) {
        printf("Invalid size. Please enter positive integer.\n");
        return 1;
    }
    printf("Enter the element for first matrix: \n");
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element (%d,%d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the first matrix is: \n");
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter the second matrix size.\n");
    int row1, col1;
    printf("Enter the row size: ");
    scanf("%d", &row1);
    printf("Enter the colum size: ");
    scanf("%d", &col1);
    if (row1<0 || col1<0) {
        printf("Invalid size. Please enter positive integer.\n");
        return 1;
    }
    printf("Enter the element for second matrix: \n");
    int arr1[row1][col1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("Enter element (%d,%d): ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("the second matrix is: \n");
    for (int i=0; i<row1; i++)
    {
        for (int j=0; j<col1; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if(col==row1)
    {
        printf("the maltiplication of the two matrices is:\n");
        int multiply_arr[row][col1];
        for (int i = 0; i < row; i++)
        {
            for (int j=0; j<col1; j++)
            {
                multiply_arr[i][j]=0;
                for (int k=0; k<col; k++)
                {
                    multiply_arr[i][j] += arr[i][k] * arr1[k][j];                   
                }
                printf("%d ", multiply_arr[i][j]);
            }
            printf("\n");
        }
        
    }
    else printf("Invalid");
    return 0;
}  
