#include<stdio.h>
void decreasing_num(int n)
{
    if (n==0)return; // base case
    printf("%d\n", n); // recursive case
    decreasing_num(n-1);
    return;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    decreasing_num(n);   
    return 0;
}