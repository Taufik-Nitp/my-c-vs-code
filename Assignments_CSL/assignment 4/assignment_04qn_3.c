#include<stdio.h> // write a program to accept the height of a person in cm and categorise the person as per:
int main()        // height >=165  : tall
{                 //  between 160 to 165 : average
int height;       //  less than 160 : small
printf("enter your height");
scanf("%d",& height);
if (height>=165){
    printf("you are tall");
    }
else if(height<165 && height>160){
    printf("you are medium height person");
    }
    else {
        printf("you are small");
    }
return 0;
}