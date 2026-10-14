#include <stdio.h>

int main(void) {
    int age;

    printf("Enter the age: ");
    if (scanf("%d", &age) != 1) return 1;

    if (age < 0) {
        printf("Invalid age\n");
    } else if (age <= 12) {
        printf("Child\n");
    } else if (age <= 19) {
        printf("Teenager\n");
    } else {
        printf("Adult\n");
    }

    return 0;
}
