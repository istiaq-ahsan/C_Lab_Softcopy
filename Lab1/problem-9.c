#include<stdio.h>
#include<math.h>
int main()
{
    double A, B, C, x, R1, R2;
    scanf("%lf%lf%lf",&A,&B,&C);
    x = ((pow(B,2))-4*A*C);
    if(x < 0){
        printf("Impossible calculation\n");
    }
    else if(A == 0){
        printf("Impossible calculation\n");
    }
    else{
        R1 = ((-B + (sqrt(x))) / (2*A));
        R2 = ((-B - (sqrt(x))) / (2*A));
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
    return 0;
}
