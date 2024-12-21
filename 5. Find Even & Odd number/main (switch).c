#include<stdio.h>

void main(){
    int a, x;
    printf("Enter number : ");
    scanf("%d", &x);
    a = x%2;
    switch (a)
    {
    case 0:
    printf("Even number");
        break;
    
    default:
    printf("odd number");
        break;
    }
}