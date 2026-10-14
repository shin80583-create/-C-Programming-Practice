#include <stdio.h>

int main(void) {
    int x;
    int y;
    int z;

    printf("Finding the value of x (x = y - z)\n");
    printf("Enter the value of y: ");
    if (scanf("%d", &y) != 1) return 1;

    printf("Enter the value of z: ");
    if (scanf("%d", &z) != 1) return 1;

    x = y - z;
    printf("The value of x = %d\n", x);
    return 0;
}
