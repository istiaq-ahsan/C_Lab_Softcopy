#include <stdio.h>

int fibonacci(int n) {
    int f1 = 1, f2 = 1, fn;

    if (n <= 0) {
        return 0; 
    }
    if (n == 1 || n == 2) {
        return 1;
    }

    for (int i = 3; i <= n; i++) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    return fn;
}

int main() {
    int n;

    scanf("%d", &n);

    int result = fibonacci(n);

    if (result == 0) {
        printf("Input must be a positive integer.\n");
    } else {
        printf("%dth Fibonacci number is: %d\n", n, result);
    }

    return 0;
}