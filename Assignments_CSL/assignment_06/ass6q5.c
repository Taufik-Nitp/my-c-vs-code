#include<stdio.h>//Q.5 WAP in C language to print sum of all elements in array.
int main()
{
    int n,i,sum=0;
    printf("write the array size :");
    scanf("%d",&n);
int num[n];
for ( i=0;i<n;i++){
    printf("Enter the %d number",i+1);
    scanf("%d",&num[i]);
}
for ( i=0;i<n;i++){
    sum=sum+num[i];
}
printf("the sum af all the element of the number is %d :",sum);
return 0;
}