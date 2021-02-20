#include<stdio.h>  //wap to display the n terms of odd natural number and and their sum using for loop.
int main()
{
int n,sum=0;
printf("write the value of n \n");
scanf("%d",&n);
for (int i=1;i<=n;i+=2){
    printf("%d ",i);
    sum=sum+i;
}
printf("sum is: %d",sum);
return 0;
}