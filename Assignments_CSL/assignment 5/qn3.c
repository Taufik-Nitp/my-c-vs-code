#include<stdio.h> //wap in c to find all the roots of a quadratic equation ax2+bx+c using switch case statement
#include<math.h>
int main()
{
float a,b,c,D,d,r1,r2;
int task;
printf("write the value of a, b,c of equation ax2+bx+c respectively\n");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
D=pow(d,0.5);
r1=(-b+D)/2*a ; r2=(-b-D)/2*a;

if(d>0)
task=1;
if(d==0)
task=2;
if(d<0)
task=3;
switch(task){
    case 1:
     printf("First root:%f\nsecond root:%f",r1,r2);
     break;
     case 2:
     printf("First root:%f\nsecond root:%f",r1,r1);
     break;
     case 3:
     printf("No real root");
     break;}
return 0;
}