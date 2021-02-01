#include<stdio.h>      //Write a program in c to print the area of rectangle in which the input is taken from the user. 
int main()
{
float length ,breadth;
printf("write the value of length\n");
scanf("%f",&length );
printf("write the value of bredth\n");
scanf("%f",&breadth );
printf("The value of the area of the above rectangle is %f ",length*breadth);
return 0;
}