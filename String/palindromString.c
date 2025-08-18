#include<stdio.h>
#include<string.h>
int main(){
    char string[30];
    printf("Enter a string: ");
    gets(string);
    int len = strlen(string), flag = 0;
    for (int i=0, j=len-1; i<j; i++ , j--)
    {
        if (string[i] != string[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag==1) printf("The string is not a palindrom string.\n");
    else printf("The string is a palindrom string.\n"); 
    return 0;
}