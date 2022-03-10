/******************************************************************************
 Write a program in C to display the pattern like right angle triangle using an asterisk
 *
 * *
 * * *
 * * * *
*******************************************************************************/

#include <stdio.h>

int main()
{
   int i, j;
   for(i=0; i<4; i++){
       printf("\n");
       
    for(j=0; j<=i; j++){
        printf("*");
    }
   }

    return 0;
}