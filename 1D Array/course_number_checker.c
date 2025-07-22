// course number checker by using 1D Array concept

#include<stdio.h>
int main()
{
    int n;
    printf("Enter total course: ");
    scanf("%d", &n);
    int c[n];
    float m[n];
    for (int i=0; i<n; i++)
    {
        printf("Enter the course code: ");
        scanf("%d", &c[i]);
        printf("Enter the mark for %d: ", c[i]);
        scanf("%f", &m[i]);
    }
    for (int j=0; j<n; j++)
    {
        if (c[j]==101)
        {
            printf("PHY: %d --- Mark: %.2f\n", c[j], m[j]);
        }
        else
        {
            printf("SE: %d --- Mark: %.2f\n", c[j], m[j]);
        }
    }
    for (int k=0; k<n; k++)
    {
        if(m[k]>=80 && m[k]<=100)
        {
            printf("Your number is above 80 in the course: %d\n", c[k]);
        }
        else
        {
            printf("Your number is below 80 in %d\n", c[k]);

        }
    }

    return 0;
}


//>>>>>>>> print even element of nth size array
// >>>>> print odd element of nth size array
//>>>>>>>> print sum even element of nth size array
// >>>>> print sum odd element of nth size array
//>>>>>>>> print even index of nth size array
// >>>>> print odd index of nth size array