#include<stdio.h>

int main(){
    int x;
    printf("Enter number : ");
    scanf("%d", &x);

    if (x>0){
        printf("Positive number");
    }
    else if (x<0){
        printf("Negitive number");
    }
    else {
        printf("Zero");
    }
}