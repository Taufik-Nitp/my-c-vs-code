// Write a C program to input week number(1-7) and print the corresponding day of week name using if else.
#include<stdio.h>
int main()
{
int a;
printf("write the number of the day between 1 to 7\n");
scanf("%d",&a);
if(a==1){
    printf("This  is monday");
}
else if(a==2){
    printf("This  is tuesday");
}
 else if(a==3){
    printf("This  is wednesday");
}
else if(a==4){
    printf("This  is thrusday");
}
else if(a==5){
    printf("This  is friday");
}
else if(a==6){
    printf("This  is saturday");
}
else {
    printf("This is sunday");
}
return 0;
}
