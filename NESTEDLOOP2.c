#include <stdio.h>

void main () {
    
    char i , j ; 

    for ( char i = 'A'; i <= 'Z'; i++)
    {
        printf("\n");
            for ( char j = 'A'; j <= i; j++)
            {
                printf("%c ",j);
            }

    }

}
