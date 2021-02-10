#include<stdio.h>   // write a program to check wether two numbers is equal or not .
int main()
{
int num1,num2;
printf("Enter two numbers \n ");
scanf("%d%d",&num1,&num2);
if ( num1==num2){
    printf("Both the numbes are equal");
}
else
{
    printf("Both the numbers are different");
}

return 0;
}