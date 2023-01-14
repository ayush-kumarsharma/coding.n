//write a program to find the area of a cone//
#include<stdio.h>
void main()
{
    int h,r,area;
    printf("enter the value of h");
    scanf("%d",&h);
    printf("enter the value of r");
    scanf("%d",&r);
    area=(3.14*r*r*h)/3;
    printf("the area of cone is=%d",area);
}