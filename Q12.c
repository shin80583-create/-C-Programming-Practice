#include <stdio.h>

int main(void) {
    int marks;

    printf("Enter the marks: ");
    if (scanf("%d", &marks) != 1) return 1;

    if (marks < 0 || marks > 100) {
        printf("Invalid marks\n");
    } else if (marks <= 40) {
        printf("Fail\n");
    } else {
        printf("Pass\n");
    }

    return 0;
}
