#include <stdio.h>

int main() {
    int day, month, year;
    char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};

    printf("Enter date (dd-mm-yy): ");
    scanf("%d-%d-%d", &day, &month, &year);

    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 1;
    }

    char *suffix;
    if (day == 1 || day == 21 || day == 31) {
        suffix = "st";
    } else if (day == 2 || day == 22) {
        suffix = "nd";
    } else if (day == 3 || day == 23) {
        suffix = "rd";
    } else {
        suffix = "th";
    }

    printf("Formatted Date: %s %d%s, 19%02d\n", months[month - 1], day, suffix, year);

    return 0;
}
