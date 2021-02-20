#include<stdio.h>  // wap to find min and max into an array.
int main()
{
int arr[]={24,233,6,3,77,73,34,553,45,5};
int max=arr[0], min=arr[0];
for (int i=1;i<10;i++){
    if( arr[i]>max ){
        max=arr[i];
    }
}
for (int i=1;i<10;i++){
    if( arr[i]<min){
        min=arr[i];
    }
}
printf("maximum is %d \nminimum is %d",max ,min);
return 0;
}