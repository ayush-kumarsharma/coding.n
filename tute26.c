#include<stdio.h>
int main()
{
    int temp;
    printf("enter the temp in celcius");
    scanf("%d",&temp);
    temp=temp+273;
    printf("the temp in farenheit is=%d",temp);
    return 0;
}