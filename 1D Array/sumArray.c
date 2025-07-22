#include <stdio.h>
int main ()
{
    int n , sum =0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=1; i<=n; i++)
    {
        printf("Enter the marks for roll %d : ", i);
        scanf("%d", &arr[i]); 
    }
    for (int i=1; i<=n; i++){
        sum += arr[i];
    }
    printf("The total marks is %d\n", sum);
    return 0;
}
   