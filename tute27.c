#include<stdio.h>
int main()
{
    int temperature;
    printf("enter the temperature");
    scanf("%d",&temperature);
    if(temperature>37)
    {
        printf("HOT");
    }
    else 
    {
        printf("COLD");
    }

    
    return 0;
}
