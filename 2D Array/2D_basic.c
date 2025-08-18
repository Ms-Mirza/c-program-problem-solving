#include<stdio.h>
int main()
{
    int arr[2][2]; // <<data type>> <<array name>> [rows size][columns size].
    
    
    arr[0][0] = 1; // assigning values to the array.
    arr[0][1] = 2;
    arr[1][0] = 3;
    arr[1][1] = 4;
    
    
    // alternative way to assign values to the array.
    // int arr[2][2] = {{1, 2}, {3, 4}};
    
    // aulternative way to assign values to the array.
    // int arr[2][2] = {1, 2, 3, 4}; // this will automatically assign values to the array.
    
    // alternative way to assign values to the array.
    // int arr[][2] = {1, 2, 3, 4}; // here the compiler will automatically determine the number of rows based on the number of elements provided.
    // but if you use this method, you must specify the number of columns. and if you only diclare the arr like this :  arr[][2]; it will give an error.

    for (int i=0; i<2; i++) // loop to print the array.
    {
        for (int j=0; j<2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}