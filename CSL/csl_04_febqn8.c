#include<stdio.h> //wap to find the factorial of 10.
int main()
{
int i,num,factorial=1;
printf("write any number");
scanf("%d",&num);
for ( i=1;i<=num;i++){
    factorial=factorial*(i);
}
printf("the factorial of %d is %d",num,factorial);
return 0;
}