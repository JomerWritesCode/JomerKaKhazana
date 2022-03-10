#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i, n;

    printf("Enter number of elements: \n");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));
    for( i = 0; i < n; i++){
        printf("Enter the elements: \n");
        scanf("%d", &ptr[i]);
    }
    for( i = 0; i < n; i++){
        printf("The elements are :%d \n",ptr[i]);
}
}