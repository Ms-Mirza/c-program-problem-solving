// important note: When calling a functions, that function must be defined above the place where it is called.
// in C-program only one main() is exist. And program start to compile from main() function.
//example:

/*
#include<stdio.h>
void bangladesh()
{
    printf("I am a bangladeshi citizen");
    return;
}
int main()
{
    bangladesh();
    return 0;
}
*/

#include<stdio.h>
int add(int X , int Y)
{
    return X+Y;
}
int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    int sum =  add(a,b);
    printf("Sum of two number: %d\n", sum);
    return 0;
}