// sum of numbers using recursion 

#include <stdio.h>
int sum(int a);
int main()
{
    int b, c;
    printf("Enter number: ");
    scanf("%d", &b);
 
         printf("Sum of first n natural numbers is: %d", sum(b));
    
   
    return 0;
}
int sum(int a){
    int result;
    result= a * (a+1) / 2;
    return result;
  
}
//sum of n natural numbers
