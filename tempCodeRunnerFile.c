#include<stdio.h>   // binary search
int main()
{   
    printf("write the size of array");
    int n,beg,end,mid,key;
    scanf("%d",&n);
int marks[n],temp;
for (int i=0;i<n;i++){
    printf("write %dth marks:",i+1);
    scanf("%d",&marks[i]);}
 // shorting(bubble)
for(int i=0;i<n;i++){
    for( int j=0;j<n-i-1;j++){
        if(marks[j]>marks[j+1]){
        temp=marks[j];
        marks[j]=marks[j+1];
        marks[j+1]=temp;
        }
    }
}
// binary searchp
printf("enter the marks to be search :");
  scanf("%d",&key);
  beg=0;
  end=n-1;
  mid=(beg+end)/2;
while(beg<=end)
    if (marks[mid]>key){
        end=mid-1;
    }
    else if(  marks[mid]==key){
        printf("the key element is present ant it is %dth element",mid+1);
        break;
    }
    else{
        beg=mid+1;
            mid=(beg+end)/2;
    }
 
 

    if (beg>end){
        printf("the key element is not found");
       
    }
return 0;
}