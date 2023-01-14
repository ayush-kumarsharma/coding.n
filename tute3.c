 //find the age of a man who is voter or not//
 #include<stdio.h>
int main()
{
    int age;
printf("enter your age");
scanf("%d",&age);

if(age>=18)
{
printf("you are able for vote");


}
else if (18-age)
{
    printf("the year left to vote %d",18-age);
}
else
{
printf("you are not able for vote");
}
return 0;
}