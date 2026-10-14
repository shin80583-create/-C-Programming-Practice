#include <stdio.h>

int main(void) {
    int a = 89;
    int b = 90;
    int choice;

    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("Choose an operation: ");
    if (scanf("%d", &choice) != 1) return 1;

    switch (choice) {
        case 1:
            printf("Addition: %d\n", a + b);
            break;
        case 2:
            printf("Multiplication: %d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
