#include <stdio.h>

int main() {

    int lesgo[4][3];
    int i,j;

    printf("Enter the elements of a 2 dim array: \n");

    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &lesgo[i][j]);
        }
        
    }
    
    printf("2 Dim array is: \n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ", lesgo[i][j]);
        }
        printf("\n");
        
    }
    
}