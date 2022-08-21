#include <stdio.h>

int main(){
    int check , year;
    printf("enter year\n");
    scanf("%d",&year);
    check = (year)%4;
    if(check==0){
        printf("its a leap year");
    }
    else{
        printf("its not a leap year");
    }
    
return 0 ;
}