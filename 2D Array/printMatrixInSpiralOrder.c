// Generate n*n matrix filled with numbers from 1 to n^2 in SPIRAL order

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
    int min_row = 0, max_row = row-1, min_col = 0, max_col = col-1, total_elements=(row*col), count = 0, num =1;
    while(count<total_elements)
    { 
        // print minimum row
        for (int j=min_col; j<=max_col && count<total_elements; j++) //
        {
            arr[min_row][j]=num;
            num++;
            count++;
        }
        min_row++;
        // print maximum colum
        for (int i=min_row; i<=max_row && count<total_elements; i++)
        {
            arr[i][max_col]=num;
            num++;
            count++;
        }
        max_col--;
        // print maximum row
        for (int j=max_col; j>=min_col && count<total_elements; j--)
        {
            arr[max_row][j]=num;
            num++;
            count++;
        }
        max_row--;
        // print minimum colum
        for (int i=max_row; i>=min_row && count<total_elements; i--)
        {
            arr[i][min_col]=num;
            num++;
            count++;
        }
        min_col++;
    }
    printf("\nThe spiral formation:\n");
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



