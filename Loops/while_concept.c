// n th number print using while loop.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int i=1;
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}


// digit counter using condition and while loop.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int count = 0;
    if (a == 0){
        count = 1;
        printf("%d", count);
    }
    else{
        while(a!=0){
            a = a/10;
            count++;
        }
        printf("%d", count);
    }

}


// reverse number calculator.

#include<stdio.h>
int main()
{
    int num, reverse=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num!=0)
    {   
        int last_digit = num%10;
        printf("%d",last_digit);
        num =num/10;
        /*
        int last_digit = num%10;
        reverse = (reverse*10) + last_digit; // aulertnative solution.
        num =num/10;
        */

    }
    //printf("%d", reverse);
    return 0;
}


// calculator of reverse number and digits of a number 

#include<stdio.h>
int main()
{
    int number, count=0, reverse=0;
    printf("Enter the number: ");
    scanf("%d", &number);
    int n = number;
    if (n==0)
    {
        printf("0");
    }
    else
    {
        while(n!=0)
        {
            n=n/10;
            count++;
        }
    }
    printf("The number of digit: %d\n\n", count);

    while(number!=0)
    {
        int last_digit = number%10;
        reverse = (reverse*10) + last_digit;
        number =number/10;

    }
    printf("The reverse number is: %d", reverse);
    return 0;
}


// The sum of all the even digits of a number calculator.

#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n==0)
    {
        printf("The sum is %d", sum);
    }
    else
    {
        while (n!=0)
        {
            int last_digit = n%10;
            if (last_digit%2==0)
            {
                sum = sum+last_digit;
            }
            n= n/10;
        }
        printf("The even digits sum is: %d", sum);
    }
    return 0;
}
