#include<stdio.h> //Q.1 Write a ‘C’ language program ,Enter 10 numbers through keyboard, 
int main(){       //and short them in ascending or descending order using do-while / for loop.
int num[10],i=0,temp;
for(int i=0;i<10;i++){
    printf("Enter the %d number",i+1);
    scanf("%d",&num[i]);
}
for (int i=0;i<10;i++){
    for (int j=0;j<10-i;j++){
        if(num[j]>=num[j+1]){
            temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
        }
    }
}
 for(int i=0;i<10;i++){
     printf("%d\n",num[i]);
 }


return 0;
}