/******************************************************************************
 Write a program in C to display the pattern like right angle triangle with a number. 

The pattern like :

1
12
123
1234
*******************************************************************************/

#include <stdio.h>

int main()
{
   int i, j;
   for(i=0; i<=4; i++){
       printf("\n");
       
    for(j=1; j<=i; j++){
        printf("%d", j);
    }
   }

    return 0;
}