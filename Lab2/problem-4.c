#include <stdio.h>

int main() {
    float hours, rate, gross, net, tax;

    printf("Enter hours worked: ");
    scanf("%f", &hours);
    printf("Enter rate per hour: ");
    scanf("%f", &rate);

    gross = hours * rate;

    if (gross > 5000) {
        tax = gross * 0.05;
    } else {
        tax = 0;
    }

    net = gross - tax;

    printf("Gross Pay: %.2f\n", gross);
    printf("Tax: %.2f\n", tax);
    printf("Net Pay: %.2f\n", net);

    return 0;
}
