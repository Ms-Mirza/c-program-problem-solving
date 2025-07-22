#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int power = pow(a,6);
    int root = sqrt(a); //sqrt, pow are a inbuilt function of math library | So when we want to use it we must include math.h as header file.....
    printf("The square root of %d is: %d\n", a, root);
    printf("The power of %d is: %d", a, power);
    
    return 0;
}