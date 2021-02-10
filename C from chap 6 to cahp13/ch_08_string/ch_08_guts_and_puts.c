#include<stdio.h>
int main()
{
char str[40];
printf("write your name: ");
// gets(str);  
// printf("your name is %s",str);
gets(str);
printf("Both are good boy you and ");
puts(str);
return 0;
}