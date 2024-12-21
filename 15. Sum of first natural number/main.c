#include<stdio.h>
void main(){
    int x, result;
    printf("Enter the value of n : ");
    scanf("%d",&x);

    result = ((x*(x+1))/2);
    printf("Result : %d", result);
}