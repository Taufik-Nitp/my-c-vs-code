#include<stdio.h>
int main()
{
int height;
printf("enter your height");
scanf("%d",& height);
if (height>=165){
    printf("you are tall");
    }
else if(height<165 && height>150){
    printf("you are medium height person");
    }
    else {
        printf("you are small");
    }
return 0;
}