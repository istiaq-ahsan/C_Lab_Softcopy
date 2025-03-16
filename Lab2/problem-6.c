#include <stdio.h>

int main() {
    char name[50];
    int units;
    float charge, total;

    printf("Enter user name: ");
    scanf("%s", name);
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        charge = units * 1.75;
    } else if (units <= 300) {
        charge = 100 * 1.75 + (units - 100) * 2.25;
    } else {
        charge = 100 * 1.75 + 200 * 2.25 + (units - 300) * 3.50;
    }

    if (charge < 100) {
        charge = 100;
    }

    if (charge > 1000) {
        total = charge + (charge * 0.15);
    } else {
        total = charge;
    }

    printf("\nUser Name: %s\n", name);
    printf("Total Charges: Tk. %.2f\n", total);

    return 0;
}
