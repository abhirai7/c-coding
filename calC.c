#include <math.h> 
#include <stdio.h>
int main(){
    int a,b;
    printf("enter the 1st number \n");
    scanf("%d",&a);
    printf("enter the second number \n");
    scanf("%d",&b);
    printf("the sum of the two numbers is %d \n",a+b);
    printf("the diffrence of the two numbers is %d\n",a-b);
    printf("the product of the two numbers is %d\n",a*b);
    printf("the division of the two numbers is %d\n",a/b);
    printf(" 1st to the power of second is %f\n",pow(a,b));
    printf("the remainder when 1st is divided by 2nd is %d",a%b);
    
    return 0;



}
