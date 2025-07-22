#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int element = 7;
    int index = -1; 
    bool flag = false;
    for (int i=0; i<10; i++)
    {
        if (arr[i]==element) {
            flag = true;
            index = i;
            break;
        }
    }
    if (flag == true) 
    {
        printf("Element %d is present at the index %d in the array.\n", element, index);

    }
    else
    {
        printf("Element %d is not present in the array.\n", element);
    }   
    return 0;
}