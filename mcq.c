//swapping the value of 2 num without third variable
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("enter the first num");
//     scanf("%d",&a);
//     printf("enter the second num");
//     scanf("%d",&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf(" your first num after swapping is %d\n",a);
//     printf("your second num after swapping is %d",b);
//     return 0;
// }
//swpping with third variable
// #include<stdio.h>
// int main()
// {
//    int a,b,c;
//    printf("enter the first num");
//    scanf("%d",&a);
//    printf("enter the second num");
//    scanf("%d",&b);
//    c=a;
//    a=b;
//    b=c;
//    printf("after swapping the value of a is=%d\n",a);
//    printf("after swapping the value of b is=%d",b);
//    return 0;
// } 



//      swap the value by betwise operator

// #include<stdio.h>
// void main()
// {
// float r,area;

// printf("enter the radius");
// scanf("%d",&r);
// area=3.14*r*r;
// printf("area is=%d",area);

// }
//
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("enter any number");
//     scanf("%d",&num);
//     if(num<0)
//     {
//         printf("negative");
//     }
//     else if(num>0)
//     {
//         printf("positive");
//     }
//     else
//     {
//         printf("zero");
//     }
//     return 0;
// }

// #include<stdio.h>
// void check()
// {
//     char c;
//     printf("press any key");
//     scanf("%c",&c);
//     if((c>='a' && c<='z') ||(c>='A' &&c<='Z'))
//     {
//         printf("alphabet");

//     }
//     else if((c>='0')&&(c<='9'))
//     {
//         printf("digit");
//     }
//     else{
//         printf("special");
//     }
// }
// void main()
// {
//     check();
// }

#include<stdio.h>
void check(int x)
{
    if(x>0)
    {
        printf("positive number");
    }
    else if(x<0)
    {
        printf("negative number");
    }
    else{
        printf("zero");
    }
}
void main()
{
    int a;
    printf("enter any number");
    scanf("%d",&a);
    check(a);
}