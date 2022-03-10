#include <stdio.h>

int fib(int a);
int main()
{
   int b, d=0, c;
   printf("Enter value: ");
   scanf("%d", &b);
   for(c = 1; c<=b; c++){
       printf("Fibonacci series is %d\n", fib(d));
     d++;
   }
    
    return 0;
}
int fib(int a){
    if(a == 1)
    return 1;
    else if (a == 0)
    return 0;
    else
    return (fib(a-1) + fib(a-2));
    
}
// recc-fib