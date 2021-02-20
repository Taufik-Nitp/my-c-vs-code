#include<stdio.h>
int main()
{
int arr[]={4,53,35,3,7,8,89,34},found=0;
int key;
printf("write the number to be searched : ");
scanf("%d",&key);
for(int i=0;i<8;i++){
    if (arr[i]==key){
        found=1;
        printf("It is present and it is %dth element",i+1);
          }
             }
             if(found==1){
                 printf("");
             }
             else {
                 printf("this is  not present ");
             }
    //  for(int i=0;i<8;i++){
    // if (arr[i]!=key){
    //     printf("It is not present\n");
    //       }
    //          }        
             
return 0;
}