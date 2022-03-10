#include <stdio.h>

int main(){
    int lmao[5] = {10,20,30,40,50};
    int large = lmao[0];

    
    for ( int i = 1 ; i < 5 ; i++)
    {
       if (lmao[i] > large)
       {
           large = lmao[i];
       }
    }

        printf("The largest array is : \n %d", large );
    
    
    return 0;
    
}
