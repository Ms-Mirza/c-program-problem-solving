/*
    *
   **
  ***
 ****
*****
*/

// Answer:

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the row number: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for (int k=1; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
    *
   ***
  *****
 *******
*********
*/

// Answer:

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
        for (int k=1; k<=i+(i-1); k++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}

/*
  *
  *
*****
  *
  *
*/

//answer

#include<stdio.h>
int main()
{
    int row;
    printf("Enter the row and colum(enter only odd number): ");
    scanf("%d", &row);
    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=row; j++)
        {
            int col = (row/2)+1;
            if (j==col || i==col)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


/*
****
*  *
*  *
*  *
****
*/

// answer

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
        for (int j=1; j<=colum; j++)
        {
            if (i==1 || i==row || j==1 || j==colum)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


/*
*   *
 * *
  *
 * *
*   *
*/

//answer

#include<stdio.h>
int main()
{
    printf("Enter the same number for row and colum\n");
    int row;
    printf("Enter the row: ");
    scanf("%d", &row);

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=row; j++)
        {
            if (i==j || (i+j==row+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


/*
    *
   **
  ***
 ****
*****
*/

//answer

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the row number: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for (int k=1; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/*
    *****
   *****
  *****
 *****
*****
*/

//answer

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the row number: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for (int k=1; k<=i; k++)
        {
            printf("*");
        }
        for (int l=1; l<=n-i; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/*
    *
   ***
  *****
 *******
*********
*/

//answer

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
        for (int k=1; k<=2*i-1; k++)
        {
            printf("*");

        }

        printf("\n");
    }
    return 0;
}


/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

//answer

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
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        for (int j=1; j<=i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i=1; i<=n-1; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf(" ");
        }
        for (int j=1; j<=n-i; j++)
        {
            printf("*");
        }
        for (int j=1; j<=n-(i+1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/*
*********
**** ****
***   ***
**     **
*       *
*/

//answer

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the line number: ");
    scanf("%d", &n);
    int nsp =1;
    for (int j=1; j<=((2*n)-1); j++)
        {
            printf("*");
        }
    printf("\n");
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n-i; j++)
        {
            printf("*");
        }
        for (int j=1; j<=nsp; j++)
        {
            printf(" ");

        }

        for (int j=1; j<=n-i; j++)
        {
            printf("*");
        }
        nsp+=2;

        printf("\n");

    }
}


/*

*/