#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        char key;
        char name[30];
        float price;
        int pages;
    }a, b, c;

    a.key = 'S';
    strcpy(a.name, "Stractured programming.");
    a.price = 10.5;
    a. pages = 150;
    printf("first character name of the book: %c\n",a.key);

    b = a; //We can copy(deep copy) a stracture to other stracture using a single line and that is stractuer feature...
    c = a;

    printf("Book name: %s\n",a.name);
    printf("Price: %.2f $\n",a.price);
    printf("pages: %d\n",a.pages);

    printf("\n\n");

    printf("Book name: %s\n",b.name);
    printf("Price: %.2f $\n",b.price);
    printf("pages: %d\n",b.pages);

    printf("\n\n");

    printf("Book name: %s\n",c.name);
    printf("Price: %.2f $\n",c.price);
    printf("pages: %d\n",c.pages);
    
    return 0;
}