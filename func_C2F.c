#include <stdio.h>

float conversion(int a);

int main()
{
   float b, c;
   printf("Enter Celcius: ");
   scanf("%f", &b);
   c = conversion(b);
   printf("%f to Fahrenhiet is %f", b , c);
    return 0;
}
float conversion(int a)
{
    float result;
    
    result = (a) * 9.0/5.0 + (32.0);
    
    return result;
    
}
