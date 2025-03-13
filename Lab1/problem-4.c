#include<stdio.h>
int main()
{
    float radius, area, circumstance, PI = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    area = PI * radius * radius;
    circumstance = 2 * PI * radius;
    printf("Area of the circle: %.2f\n",area);
    printf("Circumstance of the circle: %.2f\n",circumstance);
    return 0;
}
