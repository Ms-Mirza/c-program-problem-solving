 // data-type array-name [array-size] = {element1, element2, ...};

#include<stdio.h>
int main ()
{
    int arr[5] = {2,4,6,8,10};
    arr[4]= 100; // change the value of the last element of the array {2,4,6,8,10} to {2,4,6,8,100}
    arr [1] = 20; // change the value of the second element of the array {2,20,6,8,100} to {2,20,6,8,100}
    float arr1[5] = {1.1, 2.2, 3.3, 4.4, 5.5}; // another array of float type
    char arr2[5] = {'a', 'b', 'c', 'd', 'e'}; // another array of char type
    printf("%d\n", arr[0]); // print the first element of the integer array
    printf("%f\n", arr1[2]); // print the third element of the float array
    printf("%c\n\n", arr2[3]); // print the fourth element of the char array.
    printf("%p\n\n", &arr[0]); // print the address of the first element of the integer array
    printf("%p\n\n", &arr[1]); 
    int array[4];
   
    for (int i = 0; i < 4; i++) // take input from the user for the array elements
    {
        printf("Enter element for %d th index: ", i);
        scanf("%d", &array[i]);
    }
    
    printf("The elements of the array are:\n");
    for(int i = 0; i < 4; i++) // display the elements of the array using a for loop
    {
        printf("%d ", array[i]);
    }
    return 0;
}