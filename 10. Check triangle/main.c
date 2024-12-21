#include<stdio.h>
void main(){
    float x, y, z;
    printf("Enter 3 value of angle : ");
    scanf("%f %f %f",&x, &y, &z);
    float result = x + y + z;
    if (result == 180){
        printf("This is a valid triangle");
    }
    else {
        printf("This is not a vaild triangle");
    }
}