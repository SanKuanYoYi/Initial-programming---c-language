#include <stdio.h> 

int main()
{
    double r;
    const double PI = 3.14159;
    scanf("%lf", &r);
    double diameter = 2 * r;
    double circumference = 2 * PI * r;
    double area = PI * r * r;
    printf("%.4lf %.4lf %.4lf\n", diameter, circumference, area);
    return 0;
}
