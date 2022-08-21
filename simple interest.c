#include<stdio.h>
int main(){
    float principle,rate,time;
    int hundred=100;
    printf("enter the principle amount \n");
    scanf("%f",&principle);
    printf("enter the rate of interest \n");
    scanf("%f",&rate);
    printf("enter the time period in years \n");
    scanf("%f", &time);
    printf("the total amount is %f",principle*rate*time/hundred);

    return 0;

}