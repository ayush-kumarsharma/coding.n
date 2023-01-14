// wap to calculate simple interest for a set of values representing principal,no. of years and rate of interest
#include<stdio.h>
int main()
{
    float p=100,r=4,y=1,simpleinterest;
    simpleinterest=p*r*y/100;
    printf("the value of simpleinterest is=%f",simpleinterest);
    return 0;
}