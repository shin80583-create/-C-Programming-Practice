#include <stdio.h>

int main(void) {
    int number;

    printf("Enter the number: ");
    if (scanf("%d", &number) != 1) return 1;

    if (number % 10 == 0) {
        printf("Divisible by 10\n");
    } else {
        printf("Not divisible by 10\n");
    }

    return 0;
}
