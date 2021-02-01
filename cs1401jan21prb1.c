#include<stdio.h>
int main()
{
float income;
printf("write your income\n");
scanf("%f",&income);
if(income<=250000){
    printf("The total tax is%f",0);
    }
else if(income >250000 && income<500000){
    printf("The total tax is %f",(income-250000)*0.05);
}
else if( income>=500000 && income<750000 ){
    printf("the total tax is %f",(250000)*0.05+(income-500000)*0.10);
} 
else if (income >=750000 &&income <1000000){
    printf("the total tax is %f ", (250000*0.05)+250000*0.10+ (income -750000)*0.20);

}
else if (income >=1000000){
    printf("the total tax is %f",(250000*0.05)+250000*0.10+ (250000)*0.20+(income -1000000)*0.30);
}

return 0; 
} 