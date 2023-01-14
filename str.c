// #include<stdio.h>
// #include<string.h>
// void main()
// {
//    char a[30]="helloayush";
//    int x;
//    x=strlen(a);
//    printf("length if string=%d",x);

// }

// #include<stdio.h>
// #include<string.h>
// void main()
// {
//    char a[7];
//    printf("write any meaning");
//    fgets(a,7,stdin);
//    int i,c=0;
//    for(i=0;a[i]="\0";i++)
// {
//    if (a[i]=='a'|| a[i]=='e' ||a[i]=='i' || a[i]=='o' || a[i]=='u')
//    c++;
// }
// printf("%d",c);

// }

//string comparison

#include<stdio.h>
void main()
{
   char a[25];
   int x;
   printf("enter any word =");
   scanf("%c",&a[x]);
   char b[25];
   printf("enter second word =");
   scanf("%c",&b[x]);
   
   if((strcmp(a,b)==0))
   {
      printf("string are same");
   }
   else{
      printf("string are not same");
   }
}
void main()
{
   printf("%d%d",a[x],b[x]);
}