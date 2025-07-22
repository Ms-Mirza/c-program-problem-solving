/*
   1 
  1 1 
 1 2 1 
1 3 3 1 
*/

#include<stdio.h>
int factorial(int a)
{
    int fact = 1;
    if(a==0) return fact;
    else
    {
        for (int i=1; i<=a; i++)
        {
            fact = fact*i;
        }
        return fact;
    }
}
int nCr(int n, int r)
{
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}
int main()
{
    int n,r;
    printf("Enter pascal triangle size: ");
    scanf("%d", &n);
    r = n;
    for (int i=0; i<n; i++)
    {
        for (int j=1; j<=n-i-1; j++)
        {
            printf(" ");
        }
        for (int j=0; j<=i; j++ )
        {
            printf("%d ", nCr(i,j));
        }
        printf("\n");
    }
    return 0;
}