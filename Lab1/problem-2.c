#include<stdio.h>
int main()
{
    float cm,inches;
    printf("Enter length in centimeter: ");
    scanf("%f",&cm);
    inches = cm / 2.54;
    printf("Length in inches : %.2f\n",inches);
    return 0;
}
