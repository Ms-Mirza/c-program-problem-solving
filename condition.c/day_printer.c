#include<stdio.h>
int main()
{
    int number, day;
    printf("Enter the number: ");
    scanf("%d", &number);
    day = number % 7 ;
    if (day == 1)
    {
        printf("Saturday");
    }
    else if (day == 2)
    {
        printf("Sunday");
    }
    else if (day == 3)
    {
        printf("Monday");
    }
    else if (day == 4)
    {
        printf("Tuesday");
    }
    else if (day == 5)
    {
        printf("Wednesday");
    }
    else if (day == 6)
    {
        printf("Thursday");
    }
    else
    {
        printf("Friday");
    }
    return 0;
}