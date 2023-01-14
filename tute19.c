#include<stdio.h>
int main(){
    char i ,j;

    for(i='A'; i<='E'; i++)
    {
        for(j= 'A'; j<=i; j++)
        {
            printf("%c",j);

        }
        printf("\n");
    }
    return 0;
}
// #include<stdio.h>
// int main(){
//     int i;
    

//     for(i=2; i<=20; i++)
//     {
//         printf("%d\n",i);
//            i=i+1;
//     }
//     return 0;
// }