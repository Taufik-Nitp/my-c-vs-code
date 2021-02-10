#include<stdio.h>  
int main()
{
char *ptr="this is taufik ali";  // it can be reinitialized
//  char ptr[]="this is taufik ali";   // it cant be reinitialized or modified. 
  ptr = "this is rohan";
printf("%s",ptr);
return 0;
}