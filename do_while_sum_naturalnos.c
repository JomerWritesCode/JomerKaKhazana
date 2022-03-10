#include <stdio.h>

int main(){
    int a=1;
    int sum;
    
    do{
        sum= sum + a;
         a++;
    } while(a<=10);
     printf("sum = %d", sum);
     
    return 0;
}
