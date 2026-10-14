#include <stdio.h>

int main(void) {
    int number;

    printf("Enter the number: ");
    if (scanf("%d", &number) != 1) return 1;

    if (number >= 0) {
        printf("Non-negative\n");
    } else {
        printf("Negative\n");
    }

    return 0;
}
