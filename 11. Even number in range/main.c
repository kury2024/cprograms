#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Even numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d \n", i);
        }
    }
    return 0;
}
