#include <stdio.h>

int main(void) {
    int choice;

    printf("Choose a season: 1. Rainy  2. Summer  3. Winter\n");
    printf("Enter the number: ");
    if (scanf("%d", &choice) != 1) return 1;

    switch (choice) {
        case 1:
            printf("Rainy season\n");
            break;
        case 2:
            printf("Summer\n");
            break;
        case 3:
            printf("Winter\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
