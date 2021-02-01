#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,ci,x;
printf("Write the value of principal");
scanf("%f",&p);
printf("Write the value of rate ");
scanf("%f",&r);
printf("Write the value of time");
scanf("%f",&t);
x= (1+r/100);
ci=pow(x,t)*p;
printf("the value of compound interest is %f",ci);
return 0;
}