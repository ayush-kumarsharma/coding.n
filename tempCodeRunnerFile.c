#include<stdio.h>
void printtable();

int main()
{
    int t;
    scanf("%d",&t);
    printtable(t);

    return 0;
}

void printtable(int a)
 {
    int i;

     for ( i =10;i>=1;i--)    {
       int tab=a*i;
         printf("%d\n",tab);

     }
 


 }
