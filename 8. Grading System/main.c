#include<stdio.h>

void main (){
    printf("Please enter Your number : ");
    float x;
    scanf("%f", &x);
    if (x<0 || x>100){
        printf("Invalid Number");
    }
    else if (x>=80){
        printf("A+");
    }
    else if (x>=75){
        printf("A");
    }
    else if (x>=70){
        printf("A-");
    }
    else if (x>=65){
        printf("B+");
    }
    else if (x>=60){
        printf("B");
    }
    else if (x>=55){
        printf("B-");
    }
    else if (x>=50){
        printf("C+");
    }
    else if (x>=45){
        printf("C");
    }
    else if (x>=40){
        printf("C-");
    }
    else if (x>=33){
        printf("D");
    }
    else {
        printf("F");
    }
    return 0;
}
