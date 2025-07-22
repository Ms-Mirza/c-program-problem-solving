#include<stdio.h>
int min(int a, int b){
    if (a<b) return a;
    else return b;
}
int gcd(int a, int b){
    int hcf = 1;
    for (int i =min(a,b); i>=1; i--)
    {
        if (a%i==0 && b%i==0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("The greatest common divisor of %d and %d is: %d", a, b, gcd(a,b));
}