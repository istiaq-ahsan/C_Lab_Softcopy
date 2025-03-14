#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,S,area;
    printf("Enter the lengths (A, B, C): ");
    scanf("%lf%lf%lf",&A,&B,&C);
    S = (A + B + C)/2;
    area = sqrt(S*(S-A)*(S-B)*(S-C));
    printf("Area of the triangle: %.2lf\n",area);
    return 0;
}
