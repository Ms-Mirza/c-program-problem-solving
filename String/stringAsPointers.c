#include<stdio.h>
#include<string.h>
int main()
{
    /*
    char str[] = "stractured programming";
    char* ptrr = str; // ptr now point the str[0]
    printf("%p\n", str); // string address.
    printf("%p\n", &str[0]); // string first element address
    // here ptr stand for address and *ptr is the value present in the address.
    
    while(*ptrr != '\0')
    {
        printf("%c", *ptrr);
        ptrr++;
    }*/

    // if we declared char* ptr = "stractured programming"; insteade of char str[] = "stractured programming"; then we can't modify any individual character in the string ..
    // And char str[] = "stractured programming"; for that we can't change whole string at a time. but in pointer char* ptr = "stractured programming"; we can change the entire string. 
    char* ptr = "stractured programming";
    ptr = "my program.";
    // if we write
    char str1[] = "my name.";
    char* p = str1;
    *p = 'M'; // now it change the first element.
    printf("\n%s", str1);
    return 0;
}