#include<stdio.h>

void main() {
    int a;
    printf("Please enter the number : ");
    scanf("%d", &a);

    if(a % 2 ==0){
        printf("This is an even number");
    }
    else {
        printf("This is an odd number");
    }
}