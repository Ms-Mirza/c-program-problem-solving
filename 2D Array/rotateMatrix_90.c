// Rotate the matrix 90 degree
// hints ----> first transpose then swape colums.

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
        
        for (int j= i; j<col; j++)
        {  
              int temp = arr[i][j];
              arr[i][j] = arr[j][i];
              arr[j][i] = temp;
        }      
    }
    for (int i=0; i<row; i++)
    {
        int j=0, k= col-1;
        while(j<k)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }       
    }
    printf("The 90 degree matrix is:\n");
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