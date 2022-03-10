#include <stdio.h>

int main(){
    int lmao[5];
    int sum;
    for (int i = 0 ; i < 5; i++){
        printf("\nEnter number %i : ", i);
        scanf(" %i", &lmao[i]);
    }
    for (int i = 0 ; i < 5; i++){
        sum += lmao[i];
    }
    printf("Final sum : %i", sum);
    return 0;
}