#include<stdio.h>
#include<string.h>
int main()
{
    char arr[40];
    puts("Enter the string:");
    gets(arr);
    puts("The reverse string is:");
    for(int i=strlen(arr); i>=0; i--)
    {
        printf("%c", arr[i]);
    }
    return 0;
}
// int main()
// {
//     // puts() and gets() only take only string.. 

//     char arr[40];
//     puts("Enter the string: "); // puts print \n automatically..
//     scanf("%[^\n]s", arr);
//     // find the size of string without using strlen..
//     int size = 0;
//     int k = 0;
//     while(arr[k] != '\0')
//     {
//         size++;
//         k++;
//     }
//     printf("%d\n", size);
//     puts("The reverse string is:");
//     // aulter native way to reverse string..
//     for (int i=0, j=size-1; i<=j; i++, j--)
//     {
//         char temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//      }
//      puts("The reverse string is: ");
//      puts(arr);
//      return 0;
// }