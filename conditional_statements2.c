//Write a C program to check whether a given number is positive or negative.
#include<stdio.h>

    int main(){
    int num;
    printf("Enter number\n");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is Negative");
    }
    
    return 0;
}   