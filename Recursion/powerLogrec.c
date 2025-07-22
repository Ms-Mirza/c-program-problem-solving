#include<stdio.h>
int powerLog(int n, int p)
{
    if(p==0) return 1;
    int power = powerLog(n, p/2);
    if(p%2==0) return power * power;
    else return n * power * power;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int p;
    printf("Enter power of the number: ");
    scanf("%d", &p);
    int final = powerLog(n,p);  
    printf("%d to the power of %d is: %d\n", n, p, final); 
    return 0;
}