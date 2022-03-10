//Write a C program to check whether a given number is even or odd
#include<stdio.h>

    int main(){
    int num1, rem1;
    printf("Enter number:\n");
    scanf("%d", &num1);
    rem1 = num1 % 2;

    if(rem1 == 0)
    {
        printf("Number is Even");
    }
    else
    {
    printf("Number is Odd");        
    }
    
    return 0;
}