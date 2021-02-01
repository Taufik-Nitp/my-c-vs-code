#include<stdio.h>   // write a program to check the result of a student < 60% 1st division, between 40% to 60% 2nd division

int main()
{
int marks ;
printf("Enter your number \n");
scanf("%d",& marks);
if (marks>=60 && marks<=100){
    printf("You have got 1st division");
}
else if ( marks>=40 && marks<60){
    printf("You have got second division");
}
else {
    printf("you have got 3rd division");
}
return 0;
}