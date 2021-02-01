#include<stdio.h>    // Write a program to check wether the input number is (+) or (-).
int main()
{
int a ;
printf("write any number\n");
scanf("%d",&a);
if (a>0){
    printf("Entered number is positive (+)  ");
}
else {
    printf("Entered value is negative (-)   ");
}
return 0;
}