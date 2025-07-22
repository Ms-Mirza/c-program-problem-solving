#include<stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 1, 2, 3}; 
    
    for (int i = 0; i < 7; i++)
    {
        bool isUnique = true; // Flag to check if the element is unique
        for (int j=i+1; j<7; j++)
        {
            if (arr[i]== arr[j])
            {
                isUnique = false; // Element is not unique
                
            }
        }
        if (isUnique)
        {
            printf("Unique element is : %d\n", arr[i]);
            break;
        }
    }
    return 0;
}