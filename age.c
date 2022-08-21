#include <stdio.h>

int main(){
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if(age<=18){
        printf("you are child");}
    else if (age>18 && age<=60)
    {printf("you are adult");
    }
   else{
    printf("you are senior citizen");
   } 
    
return 0 ;
}