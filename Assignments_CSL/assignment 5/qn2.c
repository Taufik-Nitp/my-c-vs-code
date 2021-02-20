#include<stdio.h> //wap to perform all the mathematical operation using switch case.
int main()
{
int opr;
float a,b;
printf("Give any two nubers");
scanf("%f%f",&a,&b);
printf("write a number between 1 to 4 for addition ,subtraction,multiplication,division respectively\n");
scanf("%d",&opr);
switch(opr){
    case 1:
    printf("%0.2f",a+b);
    break;
     case 2:
    printf("%0.2f",a-b);
    break;
     case 3:
    printf("%0.2f",a*b);
    break;
     case 4:
    printf("%0.2f",a/b);
    break;
    default:
    printf("Give integer nummber between 1 to 4");

}

return 0;
}