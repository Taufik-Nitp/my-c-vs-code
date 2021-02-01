#include<stdio.h> // Write a program to calculate the Simple Interest in which iput is taken by the user.
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