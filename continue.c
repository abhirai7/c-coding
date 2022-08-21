#include <stdio.h>

int main(){
    int i=3, skip=5;
    while(i>2){
        i++;
        if(i==skip){
            
            continue;}
        else if (i==15)
        {break;
    
        }
            
       
        else{
            printf("%d\n",i);
         
        }
        
    }
return 0 ;
}