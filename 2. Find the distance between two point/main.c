#include<stdio.h>
#include<math.h>

int main()
{
    printf("Question 1 : Find the distance between two point (x1, y1) and (x2, y2)\n");

    float x1, x2, y1, y2;

    printf("Please enter the value of x1 & y1 continuously with space : ");
    scanf("%f %f",&x1,&y1);

    printf("Please enter the value of x2 & y2 continuously with space : ");
    scanf("%f %f",&x2,&y2);

    float distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("Distance, d = %.3f",distance);

}