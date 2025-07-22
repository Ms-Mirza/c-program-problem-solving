#include<stdio.h>
int factorial(int n){
    if (n==1 || n==0) return 1;  // base case
    return n * factorial(n-1); // recursive case
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<0){
        printf("Factorial of negative number is not defined.\n");
        return 0;
    }else{
        int fact = factorial(n);
        printf("Factorial of %d is: %d\n", n, fact);
        return 0;
    }
}