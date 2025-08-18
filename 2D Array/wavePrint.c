// matrix print in wave formate.

// ----->
// <-----
// ----->


// #include<stdio.h>
// int main()
// {
//     int row, col;
//     printf("Enter the row size: ");
//     scanf("%d", &row);
//     printf("Enter the row size: ");
//     scanf("%d", &col);
    
//     int arr[row][col];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("Enter element (%d,%d): ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
    
//     printf("The matrix is:\n");
    
//     for (int i = 0; i < row; i++)
//     {
//         for (int j=0; j<col; j++)
//         {
//             if (i%2==0)  
//             {
//                 printf("%d ", arr[i][j]);
//             }
//             else  printf("%d ", arr[i][col-1-j]);
//         }
//     }  
//     return 0;
// }

// wave 2

// matrix print in wave formate.


#include<stdio.h>
int main()
{
    int row, col;
    printf("Enter the row size: ");
    scanf("%d", &row);
    printf("Enter the row size: ");
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
    
    printf("The wave matrix is:\n");
    
    for (int j=0; j<col; j++)
    {
        if(j%2==0)
            {
                for (int i=row-1; i>=0; i--)
                {
                    printf("%d ", arr[i][j]);
                }
            } 
    
        else{
                for (int i=0; i<col; i++)
                {
                    printf("%d ", arr[i][j]);
                }  
            }
    }
    return 0;
}

