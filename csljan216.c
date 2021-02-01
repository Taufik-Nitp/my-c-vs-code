//  [Yesterday 10:19 PM] HARSHITA SINGH
// Write a C program to check whether a triangle is valid or not if angles are given using if else. How to check whether a triangle can be formed or not, if its angles are given using if else in C programming.
 #include<stdio.h>
int main()
{
int a,b,c;
printf("write all the angle of triangle here\n");
scanf("%d%d%d",&a,&b,&c);
if(a+b+c==180){
    printf("Triangle can  be formed");
}
else
{
    printf("Triangle cannot be formmed");
}

return 0;
}