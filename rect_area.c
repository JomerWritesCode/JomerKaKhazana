#include<stdio.h>

    int main(){
        int length, breadth;
        //int length = 12, breadth = 4;
        //int area = length*breadth;
        //printf("Area of the rectangle is %d", area);
        
        printf("What is the Length of the rectangle:\n " );
        scanf("%d", &length);

         printf("What is the Breadth of the rectangle:\n" );
        scanf("%d", &breadth);

        printf("area of a rectangle is %d", length*breadth);
    return 0;
}