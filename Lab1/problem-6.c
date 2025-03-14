#include<stdio.h>
#include<math.h>
int main()
{
    float side1,side2,hypotenuse;
    printf("Enter the length of the two sides of the right triangle: ");
    scanf("%f%f",&side1,&side2);
    hypotenuse = sqrt(side1*side1+side2*side2);
    printf("Length of the hypotenuse: %.2f\n",hypotenuse);
    return 0;
}
