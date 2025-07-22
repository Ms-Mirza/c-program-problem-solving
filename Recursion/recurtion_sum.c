/*
#include<stdio.h>
int sum(int n, int s)
{
    if (n==0){
        return s; 
    }
    return sum(n-1, s+n); 
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int final = sum(n,0);  
    printf("The sum of first %d natural numbers is: %d\n", n, final); 
    return 0;
}
*/

//

#include<stdio.h>
int sum(int n)
{
    if (n==1 || n==0){
        return n; 
    }
    return n+ sum(n-1); 
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int final = sum(n);  
    printf("The sum of first %d natural numbers is: %d\n", n, final); 
    return 0;
}