#include<stdio.h>//Q.6 WAP in C language to enter 5 numbers through keyboard and display them in descending order.
int main()
{
 int n,min,temp;
 printf("enter  the array size");
 scanf("%d",&n);  
int num[n],i;
for ( i=0;i<n;i++){
    printf("Enter the %d number",i+1);
    scanf("%d",&num[i]);
}
for(int i=0;i<n;i++){
    for( int j=0;j<n-i-1;j++){
        if(num[j]<num[j+1]){
        temp=num[j];
        num[j]=num[j+1];
        num[j+1]=temp;
        }
    }
}


for ( i=0;i<n;i++){
    printf("%d\n",num[i]);
}
return 0;
}
