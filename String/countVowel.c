#include<stdio.h>
#include<string.h>
int main()
{
    char string[30];
    printf("Enter a string: ");
    gets(string);
    int count = 0, len = strlen(string);
    for (int i=0; i<len; i++ )
    {
        switch(string[i]){
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                count++;
                break;
        }

        /*
        switch(string[i]){
            case 'a':
                count++;
                break;
            case 'e':
                count++;
                break;
             case 'i':
                count++;
                break;
            case 'o':
                count++;
                break;
             case 'u':
                count++;
                break;
            case 'A':
                count++;
                break;
             case 'E':
                count++;
                break;
            case 'I':
                count++;
                break;
             case 'O':
                count++;
                break;
            case 'U':
                count++;
                break;
            default:
                continue;
        }
    */
    }
    printf("Total vowel in the string is %d", count); 
    return 0;
}