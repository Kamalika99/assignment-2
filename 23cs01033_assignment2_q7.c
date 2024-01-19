#include<stdio.h>
void main()
{
    float a,b,c ;
    printf("cost of metal");
    scanf("%f",&a);
    printf("pecentage of tip and tax are");
    scanf("%f %f",&b,&c);
    float k,e,f ;
    k=(b+c)/100;
    f=k*a;
    e=a+f;
   
   printf(" final cost:%f",e);

}