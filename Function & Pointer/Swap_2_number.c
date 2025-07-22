// Swap 2 number using third variable.

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter value of a: ");
//     scanf("%d", &a);
//     int b;
//     printf("Enter value of b: ");
//     scanf("%d", &b);
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("After swapping, value of a: %d\n", a);
//     printf("After swapping, value of b: %d\n", b);
//     return 0;
// }

// Swap 2 number without using third variable.

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter value of a: ");
//     scanf("%d", &a);
//     int b;
//     printf("Enter value of b: ");
//     scanf("%d", &b);
    
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     printf("After swapping, value of a: %d\n", a);
//     printf("After swapping, value of b: %d\n", b);
//     return 0;
// }

// Swap 2 number using function:

// #include<stdio.h>
// void swap(int x, int y)
// {
//     x = x+y;
//     y = x-y;
//     x = x-y;
//     return;
// }
// int main()
// {
//     int a;
//     printf("Enter value of a: ");
//     scanf("%d", &a);
//     int b;
//     printf("Enter value of b: ");
//     scanf("%d", &b);
    
//     swap(a,b);
    
//     printf("After swapping, value of a: %d\n", a);
//     printf("After swapping, value of b: %d\n", b);
//     return 0;
// }

//important note: this will not work as we are passing the value of a and b, not the address of a and b. this is called pass by value.

// To make it work, we need to pass the address of a and b to the swap function.(pass by reference) using pointers concept.

#include<stdio.h>
void swap(int* x, int* y)   // Function to swap two numbers using pointers.
                            // int* x and int* y are pointers that will hold the addresses of the variables a and b.
                            // The function takes two integer pointers as parameters, which allows it to modify the values of the variables they point to.
                            // The function swaps the values of the two integers by dereferencing the pointers and using a temporary variable.
{
    int temp =*x; // temp is a temporary variable to hold the value of x.
    *x = *y; // *x dereferences the pointer x to get the value stored at the address it points to, which is the value of a.
    *y = temp; // *y dereferences the pointer y to get the value stored at the address it points to, which is the value of b.
    return;
}
int main()
{
    int a;
    printf("Enter value of a: ");
    scanf("%d", &a);
    int b;
    printf("Enter value of b: ");
    scanf("%d", &b);
    swap(&a, &b); // &a and &b are used to pass the addresses of a and b to the swap function. not the values themselves.
    
    printf("The value of a is %d", a);
    printf("\nThe value of b is %d", b);
}
