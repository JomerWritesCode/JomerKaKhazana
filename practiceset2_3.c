//tax
#include<stdio.h>

    int main(){
    float a = 2.5 , b = 5.0 , c = 10.0 ;
    printf("Enter:\n");
    scanf("%f", &a);
    if(a < 2.5 )
    {
        printf("No Tax ");
    }
     else if( a < b)
    {
        printf(" Tax 5%%");
    }
    else if( b < c)
    {
        printf(" Tax 20%%");
    }
    else 
    {
        printf("Tax 30%%");
    }
    return 0;
}