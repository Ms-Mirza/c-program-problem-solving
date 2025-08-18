#include<stdio.h>
#include<string.h>
typedef int Integer; 
// By typedef we can change the data-type name. For example here if we write Integer instead of int. it will be valid inside any function.
int main ()
{
    // Integer a;
    // a = 10; 
    // printf("%d", a);
    // return 0;

    // how can we use it in stracture?

    typedef struct book{
        char key;
        char name[30];
        float price;
        int pages;
    } B ; // here 'B' is working as aulternate of 'struct book'..
    
    struct book a;
    B b;
    
    a.key = 'S';
    strcpy(a.name, "Stractured programming.");
    a.price = 10.5;
    a. pages = 150;
    printf("first character name of the book: %c\n",a.key);
    printf("Book name: %s\n",a.name);
    printf("Price: %.2f $\n",a.price);
    printf("pages: %d\n",a.pages);

    /*
    int* ab= &a, bc = &b; //that is wrong decleration. this line is asume by computer as int* ab = &a and int bc = &b; // here 'bc' isn't a pointer.....
    int* ab= &a, int* bc = &b; //that is right decleration.
    */
   
    // we can handle the pointer problem useing the 'typedef'
    typedef int* pointer;
    int a=10, b= 11;
    pointer ab= &a, bc = &b;
    printf("%p\n", ab);
    printf("%p\n", bc);

}