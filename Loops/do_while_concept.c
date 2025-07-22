// ATM pin checker using do-while and condition.

#include<stdio.h>
int main()
{
    int pin, attempt=0;
    int correctPin = 1363;
    do
    {
        printf("Enter the 4-digit ATM pin: ");
        scanf("%d", &pin);
        if (pin==correctPin)
        {
            printf("Your access is granted\n");
            break;
        }
        else
        {
            attempt++;
            printf("You enter wrong pin.");

            if (attempt==3)
            {
                printf(".....\n");
            }
            else
            {
                printf("please try again.\n");
            }

        }
    }
    while(attempt<3);
    if (attempt==3)
    {
        printf("Card is Blocked for too many incorrect attempts..\n");
    }
    return 0;

}
