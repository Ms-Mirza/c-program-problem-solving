/*
   1 
  1 1 
 1 2 1 
1 3 3 1 
*/
// here we use the equation:
// 1. nCr = n!/(r!* (n-r)!)
// 2. nC(r+1) = nCr * (n-r)/(r+1)
#include<stdio.h>
int main()
{
    int n;
    printf("Enter pascal triangle size: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {   
        int first = 1;
        
        for (int j=1; j<=n-i-1; j++)
        {
            printf(" ");
        }
        for (int j=0; j<=i; j++ )
        {
            printf("%d ", first);
            first = first * (i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}