#include<stdio.h> //wap to display the series 1,3,9,27,81....  till the desired number  using for loop.
int main()
{
int a =1;
int n;
printf("write upto which you want the series");
scanf("%d",&n);
for (a=1;a<n;a*=3){
    printf("%d\n",a);
}
return 0;
}