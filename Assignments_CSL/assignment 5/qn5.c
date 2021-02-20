#include<stdio.h>  // wap to check wether a number is palindrome or not using while loop.
int main()   //656  456 87678
{
int num,apr_number,pal=0;
printf("Enter the number to be checked\n");
scanf("%d",&num);
apr_number=num;

while(apr_number!=0){
      pal= pal*10 + (apr_number%10);
            apr_number/=10;

}
 pal==num?printf("This is palindrome number"):printf("This is not a palindrome number");

return 0;
}