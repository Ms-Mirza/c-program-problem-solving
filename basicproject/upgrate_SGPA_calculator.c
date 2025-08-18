#include<stdio.h>
int main()
{
    int cradit[40];
    float CGPA[40];
    int subjects;
    float total_cradit=0, total_CGPA=0, final_SGPA=0;
    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);
    for (int i=0; i<subjects; i++)
    {
        printf("\nEnter the cradit (Ex: 1,2,3 etc) for subject %d: ", i+1);
        scanf("%d", &cradit[i]);
        printf("\nEnter the CGPA(Ex: 4, 3.75, 3.50, 3.25 etc) for subject %d: ", i+1);
        scanf("%f", &CGPA[i]);
    }
    for (int i=0; i<subjects; i++)
    {
        total_cradit += cradit[i];
        total_CGPA += (float) (CGPA[i] * cradit[i]);
    }
    final_SGPA = total_CGPA/ total_cradit;
    printf("In that semester Your SGPA is : %.2f", final_SGPA);
    return 0;
}