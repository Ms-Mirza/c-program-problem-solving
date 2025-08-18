#include<stdio.h>
int main()
{
    int a = 10, b = 11;
    int* x = &a; // p is a pointer that stores the address of a.
    // int* is used to declare a pointer variable that can point to an integer type.
    printf("\n%d", a); // Prints the value of a directly. 
    printf("%p", &a); // %p is used to print the address of a stored value.
    printf("\n%p", x); // %p is used to print the address stored in pointer x.
    printf("\n%p", &x); // %p is used to print the address of the pointer x itself.
    printf("\n%d", *x); // *x dereferences the pointer p to get the value stored at the address it points to, which is the value of a.
    *x = 20; // This changes the value of a to 20 by dereferencing the pointer x.
    printf("\n%d", a); // Prints the updated value of a.

    int** dp = &x; // dp is a pointer to a pointer, which stores the address of the pointer x.(double pointer)
    printf("\n%p", dp); // Prints the address stored in double pointer dp.
    printf("\n%p", *dp); // Dereferences dp to get the address stored in x, which is the address of a.
    printf("\n%d", **dp); // Dereferences dp twice to get the value stored at the address of a, which is 20.
    int* ab= &a, bc = &b; //that is wrong decleration. this line is asume by computer as int* ab = &a and int bc = &b; // here 'bc' isn't a pointer.....
    int* ab= &a, int* bc = &b; //that is right decleration.
    return 0;
}