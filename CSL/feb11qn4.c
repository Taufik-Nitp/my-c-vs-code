#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
int even=0,odd=0;
for (int i=0;i<10;i++){
   if(a[i]%2==0){
       even=even+a[i];}
   if(a[i]%2==1){
       odd=odd+a[i];
   }
    } 
  
   printf("even: %d\n odd sum: %d",even,odd);
return 0;
}