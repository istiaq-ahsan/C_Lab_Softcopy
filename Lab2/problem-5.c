#include <stdio.h>

int main() {
    int score;

    printf("Enter the student's score: ");
    scanf("%d", &score);

    if (score >= 80 && score <= 100) {
        printf("Grade: A\n");
    } else if (score >= 65 && score <= 79) {
        printf("Grade: B\n");
    } else if (score >= 50 && score <= 64) {
        printf("Grade: C\n");
    } else if (score >= 40 && score <= 49) {
        printf("Grade: D\n");
    } else if (score >= 0 && score <= 39) {
        printf("Grade: F\n");
    } else {
        printf("Invalid score! Please enter a score between 0 and 100.\n");
    }

    return 0;
}
