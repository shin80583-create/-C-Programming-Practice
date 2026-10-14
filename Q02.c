#include <stdio.h>

int main(void) {
    int marks;

    printf("Enter the marks (0-100): ");
    if (scanf("%d", &marks) != 1) return 1;

    if (marks < 0 || marks > 100) {
        printf("Invalid marks\n");
    } else if (marks <= 34) {
        printf("Fail\n");
    } else if (marks <= 59) {
        printf("Grade C\n");
    } else if (marks <= 79) {
        printf("Grade B\n");
    } else {
        printf("Grade A\n");
    }

    return 0;
}
