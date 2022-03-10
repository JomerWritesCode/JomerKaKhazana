#include <stdio.h>

int main(){
    int a;
    int b;
    printf("enter b:\n");
    scanf("%d", &b);
                        
    for(a=b; a ; a--){
        printf("%d\n", a);
    }

    return 0;
}
