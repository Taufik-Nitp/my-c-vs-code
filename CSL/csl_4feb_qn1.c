#include<stdio.h>
int main()
{
int a;
switch(a=3){
case 1:
printf("this is one\n");
case 2:
printf("this is two\n");
break;
case 3:
printf("this is three\n");
default :{
    printf("this is default\n");
}
case 5:
printf("this  is five\n");
}
return 0;
}