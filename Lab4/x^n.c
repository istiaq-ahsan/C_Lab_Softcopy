#include <stdio.h>

int power(int base, int exp) {
   int result = 1;

    if (exp == 0) {
        return 1;
    }

    for (int i = 0; i < exp; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent;

    scanf("%d %d",&base, &exponent);

    if (exponent < 0) {
        printf("supports only non-negative exponents.\n");
        return 1; 
    }

    int result = power(base, exponent);

    printf("Answer is: %d\n",result);

    return 0;
}