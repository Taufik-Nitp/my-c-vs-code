#include<stdio.h>
int main()
{
float cp,sp;
printf("what is the cost price\n");
scanf("%f",&cp);
printf("what is the selling price\n");
scanf("%f",&sp);
if (sp>cp){
    printf("The profit percent is %f",((sp-cp)/cp)*100);
}
else if (cp>sp){
    printf("The loss percent is %f ", ((cp-sp)/cp)*100);
}
else {
    printf("Neither profit nor loss");
}
return 0;
}