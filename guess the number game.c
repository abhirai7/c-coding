#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int number , n, chances=1;
    srand(time(0));
    number = rand()%100 + 1;
    
    do{
        printf("GUESS A NUMBER ----->");
        scanf("%d",&n);
        if(number<n){
            printf("lower than this\n");
            
        }
        else if(number>n){printf("higher than this\n");
    
        }
        else {printf("BINGO!!!");
        }
        chances++;
    }while(n!=number);
    printf("you got it in %d attempts",chances);


return 0 ;
}