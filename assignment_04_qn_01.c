#include <stdio.h> // write a program to find the greatest of three number.
int main()         // numbers are takken from user.
{
  int a, b, c;
  printf("write any three number\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a > b && a > c)
  {
    printf("first number %d is the greatest number", a);
  }
  else if (b > c && b > a)
  {
    printf("second number %d is the greatest number", b);
  }
  else
    printf("third nuber %d is the gretest number", c);
  return 0;
}