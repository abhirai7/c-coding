#include <stdio.h>

int main(){
    int a=10;
    do{
        a--;
        printf("%d\n",a);
        if(a==4){
            break;
        }
    }while(a>=2);
return 0 ;
}