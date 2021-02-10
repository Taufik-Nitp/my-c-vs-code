#include <stdio.h> // wap to check whether a vowel or constant using switch case
int main()
{
    char alph;
    printf("write any alphabet\n");
    scanf("%c", &alph);
    switch (alph)
    {
    case 'a':
        printf("It is vowel");
        break;
    case 'e':
        printf("It is vowel");
        break;
    case 'i':
        printf("It is vowel");
        break;
    case 'o':
        printf("It is vowel");
        break;
    case 'u':
        printf("It is vowel");
        break;

    default:
        printf("this is constant");
        break;
    }
    return 0;
}