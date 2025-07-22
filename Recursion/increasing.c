// using extra parameter...

/*#include<stdio.h>
void increasing_num(int x, int n)
{
    if(x>n)return; // base case
    printf("%d\n",x);
    increasing_num(x+1, n); // recursive case
    return;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    increasing_num(1,n);
    return 0;
}*/

// without extra parameter...
/*
#include<stdio.h>
void decreasing_num(int n)
{
    if (n==0)return; // base case
    decreasing_num(n-1);// recursive case
    printf("%d\n", n);
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
*/
// increasing and decreasing number using recursion

#include<stdio.h>
void manipulate_num(int n)
{
    if (n==0)return;// base case
    printf("%d\n", n); // decreasing part
    manipulate_num(n-1);// recursive case
    printf("%d\n", n); // increasing part
    return;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    manipulate_num(n);   
    return 0;
}