#include<stdio.h>
#include<math.h>
int main()
{
float a,x;
printf("write the value of number you want square root\n");
scanf("%f",&a);
// printf("the value of square root of the above number is %f",sqrt(a));
x=pow(a,.5);
printf("the value of square root is %f",x);
return 0;
}