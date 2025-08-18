#include<stdio.h>

int main() {
    void message(); // local prototype of function.
    message();
    printf("Hello.\n");

    return 0;
}
void message() {
    printf("Message.\n");
}