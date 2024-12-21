#include<stdio.h>
void main() {
    int p;
    printf("Topic 1: Area of Square.\nPlease enter the length of a Square: ");
    scanf("%d",&p);
    int afs = p * p;
    printf("Answer : Given that, the length of a Square is %d.\nWe know that, Area of Square is = length x length\n                                = %d x %d\n                                = %d\n\n",p, p, p, afs);

    printf("---------------------------------------------------------------\n\n");

    int r;
    float pi = 3.1416;
    printf("Topic 2: Area of a Circle.\nPlease enter the redius of a Circle: ");
    scanf("%d",&r);
    float afc = pi * r * r;
    printf("Answer : Given that, the redius of a circle is %d.\nWe know that, area of a circle is = pi x r x r\n                                  = %.4f x %d x %d\n                                  = %.3f\n\n",r,pi,r,r,afc);

    printf("---------------------------------------------------------------\n\n");

    int R;
    printf("Topic 3: periphery of a Circle.\nPlease enter the redius of a Circle: ");
    scanf("%d",&R);
    float afcd = pi * r * r;
    printf("Answer : Given that, the redius of a circle is %d.\nWe know that, periphery of a circle is = 2 x pi x r\n                                  = 2 x %.4f x %d\n                                  = %.3f\n\n",R,pi,R,afcd);

    printf("---------------------------------------------------------------\n\n");

    int b, h;
    printf("Topic 4: Area of a Triangle.\nPlease enter the base: ");
    scanf("%d", &b);
    printf("Please enter the height: ");
    scanf("%d", &h);
    float aft = (b * h)*0.5;
    printf("Answer : Given that, the base of a triangle is %d and the triangel is %d.\nWe know that, area of triangle is = (base x height) / 2\n                                  = (%d x %d) / 2\n                                  = %.2f\n\n",b,h,b,h,aft);

    printf("---------------------------------------------------------------\n\n");

    int x, y;
    printf("Topic 5: Area of a Rectangular.\nPlease enter the height: ");
    scanf("%d", &x);
    printf("please enter the length: ");
    scanf("%d", &y);
    int afr = x * y;
    printf("Answer : Given that, height of rectangular is %d and length of rectangular is %d.\nWe know that, area of rectangular is = height x length\n                                      = %d x %d\n                                      = %d\n\n",x,y,x,y,afr);

    printf("---------------------------------------------------------------\n\n");
}
