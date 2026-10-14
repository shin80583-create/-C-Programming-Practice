#include <stdio.h>

int main(void) {
    int number;

    printf("Enter the number: ");
    if (scanf("%d", &number) != 1) return 1;

    if (number >= 1 && number <= 100) {
        printf("This number is between 1 and 100\n");
    } else {
        printf("This number is not between 1 and 100\n");
    }

    return 0;
}
