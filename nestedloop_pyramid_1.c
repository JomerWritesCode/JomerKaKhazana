******************************************************************************

       Write a program in C to make such a pattern like a pyramid with numbers increased by 1. Go to the editor
   1 
  2 3 
 4 5 6 
7 8 9 10 

***********************************************************************/
#include<stdio.h>
int main(){
    int jiya , num =4, vivu , space , a = 1;
    
    for(jiya = 1; jiya <= num; jiya++){
        printf("\n");
    
    for(space = -15; space <= (num - jiya); space++ ){
        printf(" ");
    }
    for(vivu = 1; vivu<=jiya; vivu++){
        printf("%3d", a);
        a++;
    }
    }
    
}