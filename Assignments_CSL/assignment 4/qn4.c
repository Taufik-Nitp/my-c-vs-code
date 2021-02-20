#include<stdio.h> //wap in c to check wether the number is armstrong or not using while loop.
int main()
{
int  num,apr_num,digit=0;

printf("Enter the number to be cheked\n");
scanf("%d",&num);
apr_num=num;
while(apr_num!=0){
    digit=digit+(apr_num%10)*(apr_num%10)*(apr_num%10);
    apr_num=apr_num/10;
}
if(digit==num){
    printf("this is armstrong number ");
}
else{
    printf("this is not a armstrong number");
}

return 0;
}