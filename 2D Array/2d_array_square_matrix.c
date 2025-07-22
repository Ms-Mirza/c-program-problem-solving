// print the squre matrix and its primary & secondary diagonal and their sum 
// print middle row and colum if the row and colum number is odd.

#include<stdio.h>
int main()
{
    int n, primary=0, secondary=0;
    printf("Enter the squre matrix row and colum: ");
    scanf("%d", &n);
    int a[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("Enter the element for %d %d: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }printf("\n");
    printf("The matrix is:\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("The primary diagonal is: ");
    for (int i=0; i<n; i++)
    {
        primary = primary + a[i][i];
        printf("%d ", a[i][i]);
    }
    printf("\n\nThe sum of primary diagonal is: %d\n", primary);
    printf("\n\n");
    printf("The secondary diagonal is: ");
    for (int i=0; i<n; i++)
    {
        secondary = secondary + a[i][n-i-1];
        printf("%d ", a[i][n-i-1]);
    }
    printf("\n\nThe sum of secondary diagonal is: %d\n\n", secondary);

    if (n%2!=0)
    {
        printf("The middle row: ");
        for (int i=(n/2), j=0; j<n; j++)
        {           
            printf("%d ", a[i][j]);
        }
        printf("\n\nThe middle colum: ");
        for (int i=(n/2), j=0; j<n; j++)
        {
            printf("%d ", a[j][i]);
        }
    }
    return 0;
}