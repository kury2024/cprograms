#include<stdio.h>
int main(){
    int x, y;
    printf("Enter two number : ");
    scanf("%d %d", &x, &y);

    if (x>y){
        printf("%d is larger",x);
    }
    else {
        printf("%d is larger",y);
    }
}    