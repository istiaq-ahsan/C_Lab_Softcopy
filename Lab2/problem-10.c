#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    scanf(" %c", &c);
    printf("%c\n", islower(c) ? toupper(c) : tolower(c));

    return 0;
}
