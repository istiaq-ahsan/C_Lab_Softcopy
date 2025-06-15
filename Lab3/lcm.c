#include <stdio.h>

void findLCM(int a, int b) {
    int main_a = a;
    int main_b = b;
    int temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;

    int result = (main_a * main_b) / gcd;
    
    printf("LCM is: %d\n", result);

}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Both numbers must be positive integers.\n");
        return 1; 
    }

    findLCM(num1, num2);

    return 0;
}