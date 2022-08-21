#include <stdio.h>

int main(){
    int age;
    int vip=0;
    printf("enter age\n");
    scanf("%d",&age);
    if((age>=18 && age<90)|| vip==1){
        printf(" eligible");
    }
    else{
        printf("not eligible");
    }
return 0 ;
}