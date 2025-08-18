#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "mirza ms";
    int l = strlen(s1);
    printf("%d\n", l);
    
    char s2[10];
    char s3[]= " uddin";   
    strcpy(s2,s1);
    printf("%s", s2); // here s2 is deep copy.
    
    strcat(s1,s2); // for that we have to define size of s1. and size must be geather than s1+s3 length.
   
   

    return 0;
}