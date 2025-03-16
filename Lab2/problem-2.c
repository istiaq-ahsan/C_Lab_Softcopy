#include <stdio.h>

int main() {
    int A, B, C;

    printf("Enter three numbers (A, B, C): ");
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C) {
        printf("%d is the largest.\n", A);
    } else if (B >= A && B >= C) {
        printf("%d is the largest.\n", B);
    } else {
        printf("%d is the largest.\n", C);
    }

    return 0;
}
