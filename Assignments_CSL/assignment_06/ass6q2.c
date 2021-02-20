#include<stdio.h>//Q.2 Write a ‘C’ language program using do- while loop
int main()         //to print numbers and their cubes up to 10
{
int i=1;
do{
    printf("Number is %d and its cube is %d\n",i,i*i*i);
    i++;
}
while(i<=10);
return 0;
}