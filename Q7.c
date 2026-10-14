#include <stdio.h>

int main(void) {
    int number;

    printf("Enter the number: ");
    if (scanf("%d", &number) != 1) return 1;

    if (number % 5 == 0) {
        printf("This number is divisible by 5\n");
    } else {
        printf("This number is not divisible by 5\n");
    }

    return 0;
}
