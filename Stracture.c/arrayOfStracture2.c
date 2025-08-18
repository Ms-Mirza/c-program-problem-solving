#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct Cricketer{
        char name[30];
        int age;
        int number_of_matches;
        float average_runs;
    }cricketer;

    int n;
    printf("Enter how many cricketer data you want to input:  ");
    scanf("%d", &n);

    cricketer arr[n];

    for (int i=0; i<n; i++)
    {
        printf("\nEnter the cricketer name: ");
        scanf(" %[^\n]s", arr[i].name);
        printf("Enter the cricketer age: ");
        scanf("%d", &arr[i].age);
        printf("Enter the cricketer number of test matches: ");
        scanf("%d", &arr[i].number_of_matches);
        printf("Enter the cricketer average runs: ");
        scanf("%f", &arr[i].average_runs);
    }

    for (int i=0; i<n; i++)
    {
        printf("\nThe cricketer name: %s", arr[i].name);
        printf("\nAge: %d", arr[i].age);
        printf("\nNumber of test matches: %d", arr[i].number_of_matches);
        printf("\nAverage runs: %.2f", arr[i].average_runs);
        printf("\n");
    }
    return 0;
}