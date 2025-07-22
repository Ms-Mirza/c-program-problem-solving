#include<stdio.h>
int power(int n, int p)
{
    if (p==0) return 1; 
    return n* power(n, p-1); 
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int p;
    printf("Enter power of the number: ");
    scanf("%d", &p);
    int final = power(n,p);  
    printf("The power of %d is: %d\n", n, final); 
    return 0;
}