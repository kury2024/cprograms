#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Grade: A\n");
    } else if (marks >= 75 && marks < 90) {
        printf("Grade: B\n");
    } else if (marks >= 50 && marks < 75) {
        printf("Grade: C\n");
    } else if (marks >= 35 && marks < 50) {
        printf("Grade: D\n");
    } else if (marks < 35) {
        printf("Grade: Fail\n");
    } else {
        printf("Invalid marks input. Please enter a value between 0 and 100.\n");
    }

    return 0;
}
