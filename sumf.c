#include <stdio.h>
int sum(int a,int b);
int main(){
    int c;
    c = sum( 9 , 7);
    printf("%d",c);
return 0 ;
}
int sum(int a,int b){
    int value;
    value=a +b;
    return value;
}