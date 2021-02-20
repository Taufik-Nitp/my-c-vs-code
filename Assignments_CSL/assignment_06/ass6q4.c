#include<stdio.h> //Q.4 WAP in C language to read 5 elements from an array
int main()        //. Perform addition and multiplication of these elements.
{
    int n,i,sum=0,multi=1;
    printf("write the array size :");
    scanf("%d",&n);
int num[n];
for ( i=0;i<n;i++){
    printf("Enter the %d number",i+1);
    scanf("%d",&num[i]);
}
for ( i=0;i<5;i++){
    sum=sum+num[i];
    multi=multi*num[i];
}
printf("summation of 5 nmber is  %d\n multiplication of 5 number is %d",sum ,multi);
return 0;
}