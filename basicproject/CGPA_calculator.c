#include<stdio.h>
int main()
{
    int SP = 3, SRS = 3, MATH = 3, PHY = 3, SPL = 1;
    float sp, srs, math, phy, spl, final_grade_point;
    printf("Enter sp gread point: ");
    scanf("%f", &sp);
    printf("Enter srs gread point: ");
    scanf("%f", &srs);
    printf("Enter math gread point: ");
    scanf("%f", &math);
    printf("Enter phy gread point: ");
    scanf("%f", &phy);
    printf("Enter spl gread point: ");
    scanf("%f", &spl);
    final_grade_point = (((SP*sp)+(SRS*srs)+(MATH*math)+(PHY*phy)+(SPL*spl))/(SP+SRS+MATH+PHY+SPL));
    printf("Your Grade Point is: %.2f\n", final_grade_point);
    return 0;
}