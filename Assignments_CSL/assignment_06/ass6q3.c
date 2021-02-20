#include<stdio.h>//Q.3 WAP in C to find min and max elements into an array.
int main()
{
    int n;
    printf("write the size of array");
    scanf("%d",&n);
int num[n],i=1,j=n-2,min,max;
for(int i=0;i<n;i++){
    printf("enter %d number",i+1);
    scanf("%d",&num[i]);
}
min=num[0];
while(i<n){
    if (num[i]<min){
        min=num[i];
           }
            i++;
}
max=num[n-1];
while(j>=0){
    if (num[j]>max){
        max=num[j];
        
    }
     j--;
}
printf("the max value is %d \n the min value is %d",max,min);
return 0;
}