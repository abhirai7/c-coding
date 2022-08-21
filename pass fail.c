#include <stdio.h>

int main(){
    int ist , second, third;
    float total;
    printf("enter your 1st subject marks \n");
    scanf("%d",&ist);
    printf("enter your 2nd subject marks \n");
    scanf("%d",&second);
    printf("enter your 3rd subject marks \n");
    scanf("%d",&third);
    total = (ist + second + third)/3;
    if((total<33)|| ist<33 || second<33 || third<33)
    {printf("you falied \n percentage %f   ",total);}
    else{printf("you passed \n percentage %f  ",total);}
             

    return 0 ;
}