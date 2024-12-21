#include<stdio.h>

void main(){
    int choice;
    float value, x, result;

    printf("1. c to f\n");
    printf("2. f to c\n");
    printf("3. c to k\n");
    printf("4. k to c\n");
    printf("5. f to k\n");
    printf("6. k to f\n");
    printf("Enter your choice in number : ");
    scanf("%d",&choice);
    printf("\n\nEnter your value : ");
    scanf("%f",&x);

    switch (choice)
    {
    case 1:
        result = (((9*x)/5)+32);
        printf("Result : %.2f", result);
        break;

    case 2:
        result = ((5*(x-32))/9);
        printf("Result : %.2f", result);
        break;
    
    case 3:
        result = (x+273.15);
        printf("Result : %.2f", result);
        break;
    
    case 4:
        result = (x-273.15);
        printf("Result : %.2f", result);
        break;
    
    case 5:
        result = ((((x-32)*5)/9)+273.15);
        printf("Result : %.2f", result);
        break;
    
    case 6:
        result = (((x-273.15)*9/5)+32);
        printf("Result : %.2f", result);
        break;
    
    default:
    printf("invalid");
        break;
    }
}