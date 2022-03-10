#include<stdio.h>

    int main(){
    int a, b, c, d;

    printf("Enter number 1:\n");
    scanf("%d", &a);
    
    printf("Enter number 2:\n");
    scanf("%d", &b);

    printf("Enter number 3:\n");
    scanf("%d", &c);

    printf("Enter number 4:\n");
    scanf("%d", &d);

    if(a > b && a > c && a > d)
    {
        printf( "%d is the largest number", a);
    }

    if(b > a && b > c && b > d)
    {
        printf( "%d is the largest number", b);
    }

    if(c > a && c > b && c > d)
    {
        printf( "%d is the largest number", c);
    }

    if(d > a && d > b && d > c)
    {
        printf( "%d is the largest number", d);
    }
    return 0;
}