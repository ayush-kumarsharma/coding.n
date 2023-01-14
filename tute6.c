//find the third angle by given two angle.//
#include<stdio.h>
int main(){
    int x,y,z;
printf("enter the value of first angle");
scanf("%d",&x);
printf("enter the value of second angle");
scanf("%d",&y);
z=180-(x+y);
printf("the third angle is=%d\n",z);
return 0;
}