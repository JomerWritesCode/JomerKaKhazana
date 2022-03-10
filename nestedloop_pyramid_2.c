/******************************************************************************

       Write a program in C to make such a pattern like a pyramid with an asterisk. Go to the editor

   * 
  * * 
 * * * 
* * * *

***********************************************************************/
    #include<stdio.h>
    int main(){
        int jiya , num =4, vivu , space ;
        
        for(jiya = 1; jiya <= num; jiya++){
            printf("\n");
        
        for(space = -15; space <= (num - jiya); space++ ){
            printf(" ");
        }
        for(vivu = 1; vivu<=jiya; vivu++){
            printf(" * ");
        
        }
        }
        
    }