#include<stdio.h>

void main(){
    int x;
    printf("Please enter the year : ");
    scanf("%d", &x);

    if (x % 4 == 0)
    {
        if (x % 400 == 0){
    printf("This is the leap year");
    }
    else {
        printf("This is not the leap year");
    }
    }
    else {
        printf("This is not the leap year");
    }
    
}