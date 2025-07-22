// Here i test the C-program code.
#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=1; i<=n; i++)
    {
        printf("Enter the marks for roll %d : ", i);
        scanf("%d", &arr[i]); 
    }
    for (int i=1; i<=n; i++){
        if (arr[i]<35){
            printf("Roll %d has failed with marks %d\n", i, arr[i]);
        }
    }
}