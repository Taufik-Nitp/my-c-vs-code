#include<stdio.h>
int main()
{
float p,r,t,si;
printf("write the value of principal\n");
scanf("%f",&p);
printf("write the value of rate\n");
scanf("%f",&r);
printf("write the value of time\n");
scanf("%f",&t);
si=(p*r*t)/100;
printf("the value of simple interest is %f",si);
return 0;
}