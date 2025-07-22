#include<stdio.h>
int main()
{
    int a=10, b=5, c,d;
    c = a++;
    d = --b;
    b = --c;
    printf("%d\n", a); 
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    return 0;
}

#include<stdio.h>
int main(){
    int x = 5, y, z;

    printf("%d\n", x);
    printf("%d\n", x++);
    printf("%d\n", x);
    
    printf("%d\n", x);
    printf("%d\n", ++x);
    printf("%d\n", x);

    y = --x;
    z = x--;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);   

}