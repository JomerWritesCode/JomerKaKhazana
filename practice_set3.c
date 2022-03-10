// passing marks
#include<stdio.h>
#include<conio.h>

    int main(){
    int a;
    int b;
    int c;
    int sum = a + b + c;

    printf("Enter the marks:\n");
    scanf("%d", &a);

     printf("Enter the marks:\n");
     scanf("%d", &b);

     printf("Enter the marks:\n");
     scanf("%d", &c);

    if (sum <= 40*100 / 300 || a < 33 || b < 33 || c < 33)
    {
       printf("Student is failed");
    }
    else
    {
        printf("student is passed");
    }
    
    
        return 0;
}