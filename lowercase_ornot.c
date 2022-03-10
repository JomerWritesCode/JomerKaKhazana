#include<stdio.h>

    int main(){
    char ch;
    printf("Enter the character:\n");
    scanf("%c", &ch);

    if(ch<=122 && ch>=97 )
     {
         printf("This is lowercase");
     }
     else
     {
        printf("This is not lowercase");
     }
     
    return 0;
}