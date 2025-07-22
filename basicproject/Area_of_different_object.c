#include<stdio.h>
int main()
{
    float length, width, side, base1, base2, height, radius, PI = 3.1416;
    float Rectangle, Square, Triangle, Circle, Trapezium;
    printf("Enter the info of length, width, side, base1, base2, height, radius: \n");
    scanf("%f\n", &length);
    scanf("%f\n", &width);
    scanf("%f\n", &side);
    scanf("%f\n", &base1);
    scanf("%f\n", &base2);
    scanf("%f\n", &height);
    scanf("%f", &radius);

    Rectangle = length * width;
    Square = side * side;
    Triangle = 0.5 * base1 * height;
    Circle = PI * radius * radius;
    Trapezium = 0.5 * (base1 + base2) * height;

    printf("Area of Rectangle: %.4f\n", Rectangle);
    printf("Area of Square: %.4f\n", Square);
    printf("Area of Triangle: %.4f\n", Triangle);
    printf("Area of Circle: %.4f\n", Circle);
    printf("Area of Trapezium: %.4f\n", Trapezium);
    return 0;

}