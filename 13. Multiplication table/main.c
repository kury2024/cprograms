#include<stdio.h>
void main(){
    int x, y, z;
    printf("Enter number of multiplication table : ");
    scanf("%d", &x);

    for (y=1 ; y<= 10; y= y+1) {
        z= x*y;
        printf("%d * %d = %d\n", x, y, z);
    }
}