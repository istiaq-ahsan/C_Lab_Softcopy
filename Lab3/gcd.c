#include <stdio.h>

void findGCD(int a, int b) {
    int temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    printf("GCD is: %d\n", a);
}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Both numbers must be positive integers.\n");
        return 1; 
    }

    findGCD(num1, num2);

    return 0;
}