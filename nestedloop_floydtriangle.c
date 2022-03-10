/******************************************************************************

      Write a program in C to print the Floyd's Triangle. Go to the editor

1 
01
101 
0101 
10101

***********************************************************************/
#include<stdio.h>
int main(){
    int i, j, uga, buga;
    int a = 1;
    
    for(i = 1; i <= 5; i++){
        printf("\n");
        
        if(i%2==0){
            uga = 1, buga = 0;
        }
        else{
            uga = 0, buga = 1;
        }
    for(j = 1 ; j<= i ; j++){
        if(j%2==0){
            printf("%d", uga);
        }
        else{
            printf("%d", buga);
            
        }
    }
    }
}