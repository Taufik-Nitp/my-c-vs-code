#include<stdio.h>

int sum(int x);

int a=5;
int main()
{
int res;

res=sum(a);
printf("the value after calling is %d",res);
return 0;
}
int sum(int x){
    x+=4;
}