#include <stdio.h>
float avg(int a, int b, int c);

int main()
{
   float d;
   d = avg(3, 3 ,3);
   printf("Average of Three numbers is %f", d);

    return 0;
}

float avg(int a, int b, int c){
    float result;
    result = (a + b + c) / 3;
    return result;
}
Function-avg-of-3-nos
