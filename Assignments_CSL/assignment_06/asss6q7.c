#include<stdio.h>//Q.7 WAP in C language Program to find the average of n numbers using arrays.
int main()
{
 int n;
 float avg,sum=0;
 printf("enter  the array size");
 scanf("%d",&n);  
float num[n],i;
for ( int i=0;i<n;i++){
    printf("Enter the %d number",i+1);
    scanf("%f",&num[i]);
}
for(int i=0;i<n;i++){
    sum=sum+num[i];
    }
    avg=(sum/n);
    printf("tha avg of numbers is %f",avg);
return 0;
}