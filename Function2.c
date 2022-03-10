#include <stdio.h>

int max(int num1, int num2);  // function declaration                                              //B
                             //variables called function parameters
 
int main () {

   int a = 100;
   int b = 200;
   int ret;                                                                               // C
 
   ret = max(a, b); //call                                                                         
 
   printf( "Max value is : %d\n", ret );
 
   return 0;
}
 
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;                                                 // A
   else
      result = num2;
 
   return result; 
}

