#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int odd_sum = 0, even_sum = 0, total;
    for (int i=0; i<10; i++)
    {
        if (arr[i]%2 ==0) even_sum += arr[i];
        else odd_sum += arr[i];
    }
    total = even_sum - odd_sum;
    printf("The sum of even numbers is: %d\n", even_sum);
    printf("The sum of odd numbers is: %d\n", odd_sum);
    printf("The difference between the sum of even and odd numbers is: %d\n", total);
    return 0;
}