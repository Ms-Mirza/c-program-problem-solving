/*
condition ? expression_if_true : expression_if_false;

condition → an expression that evaluates to true or false.

expression_if_true → the value returned if the condition is true.

expression_if_false → the value returned if the condition is false.
*/

#include <stdio.h>
int main() {
    int a = 10, b = 20;
    int max;

    // Using ternary operator
    max = (a > b) ? a : b;

    printf("The maximum is %d\n", max);
    return 0;
}
