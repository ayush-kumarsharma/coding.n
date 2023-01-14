// #i//}

// #include<stdio.h>
// void mult(int a, int b);


// {
//   int ,mult;
//   mult=a*b;
//   printf("multiply is=%d",mult);
// }
// void main()
// {
//   int a,b;

//   printf("enter the value of a");
//   scanf("%d",&a);
//   printf("enter the value of b");
//   scanf("%d",&b);
//   mult(a,b);
// }


// #include<stdio.h>
// void devide(int x,int y);
// {
//   int devide;
//   devide=x/y;
//   printf("devide is=%d",devide);
// }
// void main()
// {
//   int x,y;
//   printf("enter the value of x");
//   scanf("%d",&x);
//   printf("enter the value of y");
//   scanf("%d",&y);
//   devide(x,y);
// }

// #include<stdio.h>
// void sum(int x,int y)
// {
// int sum;
// sum=x+y;
// printf("%d",sum);
// }
// void main()
// {
//   int a,b;
//   printf("enter the value of a");
//   scanf("%d",&a);
//   printf("enter the value of b");
//   scanf("%d",&b);
//   sum(a,b);


// }

// #include<stdio.h>
// void mult(int x,int y)
// {
//   int mult;
//   mult=x*y;
//   printf("%d",mult);
//   int sum;
//   sum=a+b;
//   printf("%d",sum);
// }
// void main(){
//   int a,b;
//   printf("enter the value of a");
//   scanf("%d",&a);
//   printf("enter the value of b");
//   scanf("%d",&b);
//   mult(a,b);
//   sum(a,b);
// }


// #include<stdio.h>
// int main();
// int a,b;
// printf("enter the value of  a");
// scanf("%d",&a);
// printf("enter the value of b");
// scanf("%d",&b);
// swap


// #include<stdio.h>
// void swap(int a,int b)
// {
//   int swap;
//   a=a+b;
//   b=a-b;
//   a=a-b;
//   printf("%d\n",a);
//   printf("%d",b);
// }
// void main()
// {
//   int x,y;
//   printf("enter first num:");
//   scanf("%d",&x);
//    printf("enter second num:");
//   scanf("%d",&y);
//   swap(x,y);
// }

// #include<stdio.h>
// void meall()
// {
//   float meal,tax,taxx,totaltax;
//   printf("enter the meal");
//   scanf("%f",&meal);
//   tax=meal*20/100;
//   printf("the tax with 20per.. gst is=%f\n",tax);
//   taxx=meal*50/100;
//   printf("the tax with 50 per.. gst is=%f\n",taxx);
//   totaltax=tax+taxx;
//   printf("the total tax is=%f",totaltax);
  
// }
// void main()
// {
//   meall();
// }

// #include<stdio.h>
// void check(int a,int b,int c)

// {

// if((a>b)&&(a>c))
// {
//   printf("a is greater");
// }
//   else if((b>a)&&(b>c))
// {
//   printf("b is greater");
// }
// else{
//   printf("c is greater");
// }
// }
// void main()
// {
// int x,y,z;
// printf("enter the value of x=");
// scanf("%d",&x);
// printf("enter the value of y=");
// scanf("%d",&y);
// printf("enter the value of z=");
// scanf("%d",&z);
//   check(x,y,z);
// }

// //

// #include<stdio.h>
// void check(int num)


// {
//   if( "indian")
//   {
//     printf("NAMASTE");
//   }
//   else if("chinees")
//   {
//     printf("chaichuchu");
//   }
//   else{                                              //////doubt//////
//     printf("i don't know");
//   }
// }
// void main()
// {
//   int say;
//   printf("say your variety");
//   scanf("%d",&say);
//   check(say);
// }


// #include<stdio.h>
// void eo(int a)
// {
//   if(a%2==0)
//   {
//     printf("even");
//   }
//   else
//   {
//     printf("odd");
//   }
// }
// void main()
// {
// int x;
// printf("enter a number");
// scanf("%d",&x);
// eo(x);
// }


// #include<stdio.h>
// void check(int x)
// {
//     if(x>0)
//     {
//         printf("positive number");
//     }
//     else if(x<0)
//     {
//         printf("negative number");
//     }
//     else{
//         printf("zero");
//     }
// }
// void main()
// {
//     int a;
//     printf("enter any number");
//     scanf("%d",&a);
//     check(a);
// }
// #include<stdio.h>
// void day(int week)
// {
//   if(week==1)
//   printf("MONDAY");
//   if(week==2)
//   printf("TUESDAY");
//   if(week==3)
//   printf("WEDNESDAY");
//   if(week==4)
//   printf("THURSDAY");
//   if(week==5)
//   printf("FRIDAY");
//   if(week==6)
//   printf("SATURDAY");
//   if(week==7)
//   printf("SUNDAY");
// }
// void main()
// {
//   int num;
//   printf("enter any number");
//   scanf("%d",&num);
//   day(num);
// }

// #include<stdio.h>
// void marks(int x)
// {
// if((p>80)&&(p<90))
// {
//   printf("topper");
// }
// else if((p>70)&&(p<80))
// {
//   printf("averege");
// }
// else
// printf("normal");
// }

// void main()
// {
//   int math,physics,chemistry,t,p,g;
//   printf("enter your math marks");
//   scanf("%d",&math);
//    printf("enter your physics marks");
//   scanf("%d",&physics);
//    printf("enter your chemistry marks");
//   scanf("%d",&chemistry);
//   t=math+chemistry+physics;
//   printf("total marks is=%d",t);
//   p=t/3;

// }
// #include<stdio.h>
//  void printapple();
//  int main()
//  {
//   printapple();
//   return 0;
//  }
//  void printapple()
//  {
//   printf("APPLE: ");
//  }
// write a function that prints NAMASTE if user is indian & BONJOUR if user is french

#include<stdio.h>
void namaste();
void bonjjour();
int main()
{
  char ch;
  printf("enter i for indian and f for french : ");
  scanf("%c",&ch);
  if(ch=='i')
  {
    printf("NAMASTE: ");
  }
  else if(ch=='f'){
    printf("BONJOUR");
  }

else{
  printf("WRONG  :");

}
return 0;
}
void namaste()
{
  printf("NAMASTE\n");
}
void bonjjour()
{
  printf("BINJOUR");
}



