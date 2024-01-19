#include<stdio.h>
void main()
{
    int a,b,k,c,e,f ;
 printf("enter three numbers a,b and c");
 scanf("%d,%d,%d",&a,&b,&c);
   k =a>b?a:b;
   e =b>c?b:c;
   f=k>e?k:e;

 printf("\n greater number is  = %d",f);
}