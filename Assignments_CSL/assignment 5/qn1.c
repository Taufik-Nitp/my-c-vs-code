#include<stdio.h>   //wAp to check wether it is constant or vowel using switch- case statement.
int main()
{
char alph;
printf("write any lower case alphabet :");
scanf("%c",&alph);
switch (alph)
{
case 'a' :
    printf("vowel");
    break;
case 'e' :
    printf("vowel");
    break;
    case 'i' :
    printf("vowel");
    break;
    case 'o' :
    printf("vowel");
    break;
    case 'u' :
    printf("vowel  ");
    break;
    default:
    printf("constant  ");
    break;
}
return 0;
}