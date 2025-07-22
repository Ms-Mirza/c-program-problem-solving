#include<stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5 , 6, 3}; // Example array with a duplicate element
    
    for (int i = 0; i < 7; i++)
    {
        for (int j=i+1; j<7; j++)
        {
            if (arr[i]== arr[j])
            {
                printf("Duplicate element is : %d\n", arr[i]);
                break; // Exit the inner loop if a duplicate is found
            }
        }
    }
    return 0;
}