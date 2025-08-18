#include<stdio.h>
#include<string.h>
int main()
{
    char str[30] = "Mirza Mohammad Salah Uddin.";
    // str[4] = 'A'; // str[4] = 65; (the will give also same answer)---> here 65 is ascii value of A.
    // int i=0;
    // while (str[i]!= '\0')
    // {
    //     printf("%c", str[i]);
    //     i++;
    // }

    char arr[30];
    //scanf("%s", arr); // only first word is considered

    gets(arr); // take entire sentence input.

    //scanf("%[^\n]s", arr); // this also take entire sentence input.

     puts(arr); // use for string output

    //print string without loop
    printf("%s", str);
    return 0;
}