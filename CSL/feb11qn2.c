#include<stdio.h>
int main()
{
int marks[5],sum=0;
for(int i=0;i<5;i++){
    printf("Enter the marks of %d: ",i+1);
    scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++){
        sum=sum+marks[i];
    }
    printf("sum is %d",sum);
return 0;
}