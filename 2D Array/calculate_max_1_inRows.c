//Given matrix filled with 0s and 1s, find row with maximum 1s


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
    printf("\n");
    int max_exist_count_1=0, max_exist_1_Row=0;
    for (int i=0; i<row; i++)
    {
        int count = 0;
        for (int j=0; j<col; j++)
        {
            if(arr[i][j] == 1) count +=1;    
        }
        if (count>max_exist_count_1)
        {
            max_exist_count_1 = count;
            max_exist_1_Row = i;
        }  
    }
    printf("The row with the maximum '1' in the matrix is: %d\nAnd the maximum count of '1': %d",max_exist_1_Row, max_exist_count_1);
    return 0;
}