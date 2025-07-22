/*
1
01
101
0101
*/

// Answer:

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {

        for(int j=1; j<=i; j++)
        {

            if((i+j)%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}

// aulternative:
/*
1
01
101
0101
*/

#include<stdio.h>
int main()
{
    int row;
    printf("Enter the row: ");
    scanf("%d", &row);
    int start;
    for (int i=1; i<=row; i++)
    {
        
        if (i%2!=0)
        {
           start=1;
        }
        else{
            start = 0;
        }
        for (int j=1; j<=i; j++)
        {
            printf("%d", start);
            if(start==0) 
            {
                start =1;
            }
            else
            { 
                start =0;
            }
        }
        printf("\n");
    }
    return 0;
}


/*
1234
123
12
1
1357
135
13
1
*/

//answer

#include<stdio.h>
int main()
{
    int row, colum;
    printf("Enter the row number: ");
    scanf("%d", &row);

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=(row+1-i); j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i=1; i<=row; i++)
    {
        int num = 1;
        for (int j=row; j>=i; j--)
        {
            printf("%d", num);
            num +=2;
        }
        printf("\n");
    }
}


/*
123456789
1234 6789
123   789
12     89
1       9
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
            printf("%d", j);
        }
    printf("\n");
    for (int i=1; i<=n; i++)
    {
        int a=1;
        for (int j=1; j<=n-i; j++)
        {
            printf("%d", a);
            a++;
        }
        for (int j=1; j<=nsp; j++)
        {
            printf(" ");
            a++;

        }

        for (int j=1; j<=n-i; j++)
        {
            printf("%d", a);
            a++;
        }
        nsp+=2;

        printf("\n");

    }
}


/*
123454321
1234 4321
123   321
12     21
1       1
*/

//answer

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the line number: ");
    scanf("%d", &n);
    int nsp =1;
    for (int j=1; j<=n; j++)
        {
            printf("%d", j);
        }
    for (int j=n-1; j>=1; j--)
        {
            printf("%d", j);
        }
    printf("\n");
    for (int i=1; i<=n; i++)
    {
        int a=1;
        for (int j=1; j<=n-i; j++)
        {
            printf("%d", a);
            a++;
        }
        for (int j=1; j<=nsp; j++)
        {
            printf(" ");


        }

        for (int j=1; j<=n-i; j++)
        {
            a--;
            printf("%d", a);
        }
        nsp+=2;

        printf("\n");

    }
}


/*
1111111
1222221
1233321
1234321
1233321
1222221
1111111
*/

//answer

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the line number: ");
    scanf("%d", &n);
    int min =0;
    for (int i=1; i<=2*n-1; i++)
    {
        for (int j=1; j<=2*n-1; j++)
        {
            int a=i;
            if(a>n) a= 2*n -i;
            int b=j;
            if (b>n) b= 2*n -j;
            if (a<b) min = a;
            else min = b;
            printf("%d", min);
        }
        printf("\n");
    }

}


/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

//answer

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the line number: ");
    scanf("%d", &n);
    int min =0;
    for (int i=1; i<=2*n-1; i++)
    {
        for (int j=1; j<=2*n-1; j++)
        {
            int a=i;
            if(a>n) a= 2*n -i;
            int b=j;
            if (b>n) b= 2*n -j;
            if (a<b) min = a;
            else min = b;
            printf("%d", (n+1)-min);
        }
        printf("\n");
    }

}

/*
    1
   121
  12321
 1234321
123454321
*/
//answer

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
            printf("%d", j);
        }
        for (int j=1; j<=i-1; j++)
        {
            printf("%d", a);
            a--;
        }
        printf("\n");
    }

    return 0;
}


/*
1
13
135
1357
*/

//answer

#include<stdio.h>
int main()
{
    int row, colum;
    printf("Enter the row: ");
    scanf("%d", &row);
    printf("Enter the colum(less than row): ");
    scanf("%d", &colum);
    for (int i=1; i<=row; i++)
    {
        int num =1;
        for (int j=1; j<=i; j++)
        {
            printf("%d", num);
            num +=2;
        }
        printf("\n");
    }
    return 0;
}
