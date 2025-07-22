#include<stdio.h>
void fun(int a[])
{
    a[0] = 10; // This will modify the first element of the array
    return;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    fun(arr);
    printf("%d\n", arr[0]); // This will print the modified first element of the array
    
    return 0;
}