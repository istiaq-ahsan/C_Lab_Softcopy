#include<stdio.h>
#include<math.h>
int main()
{
    double X, Y, A;
    scanf("%lf",&X);
    A = ((X-1)/X);
    Y = A + ((pow(A,2))/2) + ((pow(A,3))/3) + ((pow(A,4))/4);
    printf("%lf",Y);
    return 0;
}
