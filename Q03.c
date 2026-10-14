#include <stdio.h>

int main(void) {
    int units;

    printf("Enter the units: ");
    if (scanf("%d", &units) != 1) return 1;

    if (units < 0) {
        printf("Invalid units\n");
    } else {
        printf("Units entered: %d\n", units);
    }

    return 0;
}
