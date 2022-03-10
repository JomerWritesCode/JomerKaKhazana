#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    int i;
    ptr = (float*) malloc(4 * sizeof(float));
    for( i = 0; i < 4; i++){
        printf("Enter %d element: \n", i);
        scanf("%f", &ptr[i]);
    }
    for( i = 0; i < 4; i++){
        printf("The %d element is : %f \n",i, ptr[i]);
}
}