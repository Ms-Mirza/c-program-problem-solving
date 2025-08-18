#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        char key;
        char name[30];
        float price;
        int pages;
    };
    // struct book a;
    // a.key = 'S';
    // strcpy(a.name, "Stractured programming.");
    // a.price = 10.5;
    // a. pages = 150;
    
    // we can also initialize the structure as for example:   
    struct book a = {'S', "Structured programing", 10.5, 150}; // or that you have to follow the order of 'struct book'...
    printf("first character name of the book: %c\n",a.key);
    printf("Book name: %s\n",a.name);
    printf("Price: %.2f $\n",a.price);
    printf("pages: %d\n",a.pages);
    return 0;
}