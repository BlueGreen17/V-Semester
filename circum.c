#include<stdio.h>
int main()
{
    const double pi = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter the desired radius of the circle");
    scanf("%lf", &radius);

    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("The circumference of the circle will be: %lf", circumference);
    printf("\nThe area of the circle will be: %lf" , area);

    return 0;

}