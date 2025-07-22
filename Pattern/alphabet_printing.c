/*
1
AB
123
ABCD
12345
*/

// number and alphabet combination

#include<stdio.h>
int main()
{
    int row, colum;
    printf("Enter the row: ");
    scanf("%d", &row);
    printf("Enter the colum: ");
    scanf("%d", &colum);
    for (int i=1; i<=row; i++)
    {
        int number = 1;
        int alphabet = 65;
        for (int j=1; j<=i; j++)
        {
            if (i%2==0)
            {
                printf("%c", alphabet);
                alphabet++;
            }
            else
            {
                printf("%d", number);
                number ++;
            }
        }
        printf("\n");
    }

    return 0;

}


/*
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
*/

// answer

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the line number: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for (char alp = 'A'; alp<= 'A'+ ((i-1)*2); alp++)
        {
            printf("%c", alp);

        }

        printf("\n");
    }
}


/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

//Answer

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the row number: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        int a=i-1;
        for (int j=1; j<=(n-i); j++)
        {
            printf(" ");
        }
        for (int j=1; j<=i; j++)
        {
            char ch = (char)(j+64);
            printf("%c", ch);
        }
        for (int j=1; j<=i-1; j++)
        {
            char ch = (char)(a+64);
            printf("%c", ch);
            a--;
        }
        printf("\n");
    }

    return 0;
}
