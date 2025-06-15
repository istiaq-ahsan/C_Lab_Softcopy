#include <stdio.h>

void factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    printf("Factorial is %d\n", result); 
}

int main() {
    int num;

    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num > 12) {
        printf("Number too large! Factorial may overflow with int type.\n");
    } else {
        factorial(num);
    }

    return 0;
}