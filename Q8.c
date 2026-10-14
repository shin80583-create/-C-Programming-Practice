#include <stdio.h>

int main(void) {
    int number;

    printf("Enter the number: ");
    if (scanf("%d", &number) != 1) return 1;

    if (number > 100) {
        printf("This number is greater than 100\n");
    } else {
        printf("This number is not greater than 100\n");
    }

    return 0;
}
