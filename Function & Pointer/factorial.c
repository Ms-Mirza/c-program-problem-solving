// try to find nCr = n!/r!(n-r)!.........(factorial concept)

#include<stdio.h>
long long int factorial(int a)
{
    long long int fact = 1;
    for (int i=1; i<=a; i++)
    {
        fact = fact*i;
    }
    return fact;
}
long long int nCr(int n, int r)
{
    long long int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int r;
    printf("Enter r: ");
    scanf("%d", &r);
    if (r>n) 
    {
        printf("Invalid input.\nThe input value r can't be greater than n");
        return 0;
    }

    printf("%lld", nCr(n,r));
    return 0;
}