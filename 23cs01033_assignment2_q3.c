#include<stdio.h>
void main()
{
    printf("enter a number");
    int a,b,c,d,e,f,g;
    scanf("%d",&a);
    b=a/365;
    c=a%365;
    d=c/30;
    e=c%30;
    f=e/7;
    g=e%7;
    printf("\n no.of years =%d",b);
    printf("\n no.of months=%d",d);
    printf("\n no.of weeks =%d",f);
    printf("\n no.of days =%d",g);
    
}