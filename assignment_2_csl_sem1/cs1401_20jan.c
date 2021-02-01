#include<stdio.h>
int main()
{
int a ;
printf("write ny number\n");
scanf("%d",&a);
if(a%2==0)
    {
      a=a*4;
    }
else
{
    a=a*3;
}
printf("%d",a);


return 0;
}