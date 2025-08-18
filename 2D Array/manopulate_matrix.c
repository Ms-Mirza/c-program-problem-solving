// change a (n X n) matrix with its transpose matrix.

#include<stdio.h>
int main()
{
    int row, col;
    printf("Enter the row size: ");
    scanf("%d", &row);
    printf("Enter the row size: ");
    scanf("%d", &col);
    if (row != col) {
        printf("Invalid size. Please enter a (n X n) matrix.\n");
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
    printf("The matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<row; i++)
    {
        
        for (int j= i+1; j<col; j++)   // here j is start from i+1 and end at last. By doing that we ignore the double swaping.
        {                              // And here we ignore the bottom pyramid of primary diagonal of (n X n) matrix.
              int temp = arr[i][j];
              arr[i][j] = arr[j][i];
              arr[j][i] = temp;
        }
        printf("\n");        
    }
    printf("The transpose matrix is:\n");
    for (int i=0; i<row; i++)
    {
        
        for (int j=0; j<col; j++)
        {
               printf("%d ", arr[i][j]);
        }
        printf("\n");        
    }
    return 0;
}