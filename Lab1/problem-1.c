#include<stdio.h>
int main()
{
    int A,B;
    printf("Enter two integers A and B: ");
    scanf("%d%d",&A,&B);
    printf("Addition: %d\n",A + B);
    printf("Subtraction: %d\n",A - B);
    printf("Multiplication: %d\n",A * B);
    if(B != 0){
        printf("Division: %.2f\n",(float)A / B);
    }
    else{
        printf("Division by zero is not allowed.\n");
    }
    return 0;
}
