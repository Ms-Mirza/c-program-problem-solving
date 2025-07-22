#include<stdio.h>
int main()
{
    int amount, waver;
    float waver_amount, final_amount;

    printf("Enter the amount: ");
    scanf("%d", &amount);
    printf("Enter the waver: ");
    scanf("%d", &waver);
    waver_amount = amount * (waver/100.0);
    final_amount = amount - waver_amount;
    printf("Your waver amount: %.2f Taka\n", waver_amount);
    printf("You have to pay: %.2f Taka\n", final_amount);
    return 0;
}