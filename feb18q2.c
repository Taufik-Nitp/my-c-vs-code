#include<stdio.h>
int sum(int a,int b){
    int summation=a+b;
    return summation;
}
int main()
{
int x,y;
printf("write a nd b");
scanf("%d%d",&x,&y);
printf("%d",sum(x,y));
return 0;
}