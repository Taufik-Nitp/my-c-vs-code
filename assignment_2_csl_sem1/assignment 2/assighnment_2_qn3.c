#include<stdio.h> //Write a program in c for swapping the value of the two variable. 
int main()
{
float a ,b,temp;
printf("write the value of a \n");
scanf("%f",&a);
printf("write the value of b \n");
scanf("%f",&b);
temp=a;
a=b;
b=temp;
printf("The value of a is %f \n",a);
printf("The value of b is %f \n",b);
return 0;
}