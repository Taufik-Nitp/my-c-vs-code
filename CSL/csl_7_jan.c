#include<stdio.h>    
int main()
{
int a,b,temp;

printf("write the value of a\n");
scanf("%d",&a);
printf("write the value of b\n");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("a=%d",a);
printf("b=%d",b);
return 0;
}