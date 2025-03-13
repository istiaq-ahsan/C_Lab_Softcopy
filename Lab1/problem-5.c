#include<stdio.h>
int main()
{
    double X,Y,Z,total,average;
    printf("Enter marks of three subjects(X, Y, Z): ");
    scanf("%lf%lf%lf",&X,&Y,&Z);
    total = X + Y + Z;
    average = total / 3;
    printf("Total marks: %.2lf\n",total);
    printf("Average marks: %.2lf",average);
    return 0;
}
