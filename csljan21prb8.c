#include<stdio.h>
int main()
{
int age;
printf("write your age\n");
scanf("%d",&age);
if(age<18){
    printf("you are not eligible for working");
}
else if (age>=18 && age<=50){
    printf("You are eligible for working");
    }
else {
    printf("you are retired");
}
return 0;
}