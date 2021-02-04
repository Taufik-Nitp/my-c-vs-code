#include<stdio.h>  // write a program to print wether a person is eligible for work or not .
int main()         // Below 18:- not eligible for work 
{                  // between 18 to 60 : eligible for work 
int age;           // above 60 : retired age.
printf("write your age\n");
scanf("%d",&age);
if(age<18 ){
    printf("you are not eligible for job");
}
else if (age>=18 && age<=60){
    printf("You are eligible for job");
    }
else if (age>60) { 
    printf("you are retired");
}
else{
    printf("age cannot be negative please give a positive number");
}
return 0;
}