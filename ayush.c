// #include<stdio.h>
// void main()
// {
//     float r,area;
//     printf("enter the radius");
//     scanf("%f",&r);
//     area=3.14*r*r;
//     printf("the area of circle is=%f4",area);
// }
#include<stdio.h>
int main()
{
    int age;
    printf("enter the age of any person");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("he can vote");
    }
    else if(age>100)
    {
        printf("bhagwaan");

    }
    else{
        printf("non voter");
    }
    return 0;
}