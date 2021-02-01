#include<stdio.h>  // Write a program checking the candidate is eligible or not.
int main()
{
int age;
printf("Enter your age\n");
scanf("%d",&age);
if(age>=18 ){
    printf("You are eligible for voting");
}
else
{
    printf("You are not eligible for voting");
}

return 0;
}