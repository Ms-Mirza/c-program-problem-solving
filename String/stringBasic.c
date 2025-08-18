// string basically a character array
// so for all string the data type is <<char>>
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[5];
    char arr1[5] = {'m','i','r','z','a'}; // we can also declar this type of string.
    char arr1[] = {'m','i','r','z','a','\0'};
    
    //printf("%c", arr1[2]); // print a spacific character of a string.

    char ch = 'a';// it takes 1 byte in memory;
    int x = 5; // it takes 4 bytes in memory. and short takes 2 bytes.
    char arr2[5] = {'1','2','3','4','6'}; // this array takes (5*1)= 5 bytes in memory.
    int arr3[3] = {1,2,3}; // this takes (4*3)= 12 bytes in memory. 
    // null character = '\0'; which AscII value is 0.
    char arr4[] = "hello! Mirza Mohammad Salah Uddin."; // this is also right. and computer automatically add '\0' at the last of string. 
    // but char arr1[5] = {'m','i','r','z','a'}; in this type of diclaration computer does not add '\0' at the end of the string. we have to do it manually
    int i =0;
    while (arr4[i] != '\0')
    {
        printf("%c", arr4[i]);
        i++;
    }
    // arr5[5] = "hello"; that is error.....
    // right version
    arr5[6]= "hello"; // size 6 because '\0' also take one byte in the string 
    return 0;
}