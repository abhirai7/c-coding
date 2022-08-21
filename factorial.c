#include <stdio.h>

int main(){
    int i=0 , n , fac = 1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fac *= i;
        
    }
    printf("%d",fac);
return 0 ;
}