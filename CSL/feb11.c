#include<stdio.h>
int main()
{
int marks[5];
for(int i=0;i<5;i++){
    printf("Enter the marks of %d: ",i+1);
    scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++){
        printf("marks of 1 is :%d\n",marks[i]);
    }
return 0;
}