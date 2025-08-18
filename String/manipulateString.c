#include<stdio.h>
#include<string.h>
int main()
{
    char str[60];
    puts("Enter the string:");
    scanf("%[^\n]s", str);
    char ch;
    printf("\nEnter a character that you want to add in the string:");
    scanf(" %c", &ch);
    int index;
    printf("\nEnter the index where you want to add the character:");
    scanf("%d", &index);
    printf("String: %s\nCharacter: %c\nIndex: %d\n", str, ch, index);

    int len=strlen(str);
    if (index > len || index < 0) printf ("Invalid index.");

    for (int i= len; i>=index; i--)
    {
        str[i+1] = str[i];
    }
    str[index] = ch;

    printf("The updated str is:\n%s", str);
    return 0;
}