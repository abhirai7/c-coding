#include <stdio.h>

int main(){
    int i=0, n;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if((n%i!=0) || n==2){
            printf(" prime number");
            break;
        }
        else{printf("not a prime number");
        break;}
    }
return 0 ;
}