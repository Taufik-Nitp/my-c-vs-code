#include<stdio.h>    //Write a program to addition of two square number .
#include<math.h> 
int main()
{
float a,b;
printf("Write the value of the first number \n");
scanf("%f",&a);
printf("Write the value of the second number \n");
scanf("%f",&b);
printf("The value of the square of the above two numbers is %f ",pow(a,2)+pow(b,2));
return 0;
}