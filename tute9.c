// 

#include<stdio.h>
int main()
{
    int n,r,arm;
    printf("enter any number");
    scanf("%d",&n);
    r=n;
    while(n>0)
    r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;
    if(arm=n)
    {
        printf("armstrong");
    }
    else
    {
        printf("not");

    }
    return 0;
}