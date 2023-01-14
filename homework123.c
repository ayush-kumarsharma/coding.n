// #include<stdio.h>
// int main()
// {
//     int length,breath,area;
//     printf("enter the length");
//     printf("enter the breath");
//  scanf("%d\n%d",&length,&breath);
//  area=2*(length+breath);
//  printf("the area is =%d",area);
//  return 0;
// }

// /#/ take a number(n) from user & output its cube (n*n*n)
// include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the value of n");
//     scanf("%d",&n);
//      n=n*n*n;
//     printf("the cube is %d",n);
//     return 0;
// }

// 
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=2;i<=50;i++)
//     {
//         for(j=2;j<=49;j++)
//         {
//             if(i%j==0)
//             {
//                 printf("%d\n",i);
//             }
//             else
//             {
//                 ("is not prime no %d\n",i);
//             }
            
//         }
//     }
// }

#include<stdio.h>
void main()
 {
    float radius,area;
    printf("enter the radius");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("area is=%f",area);
   
 }
