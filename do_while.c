#include <stdio.h>

int main(){
    int i;
    int j=0;
    printf("enter i:\n");
    scanf("%d", &i);
    
    do{
       printf("i = %d\n" ,j+1); 
       j++;
    }
    while(i > j);
    

    return 0;
}
