#include<stdio.h>

    int main(){
     int age;
     printf("Enter your age\n");
     scanf("%d", &age);

if(age>=90)
{
printf("You are above 90, you cannot drive");
}
else 
{
    printf("You can drive!\t");
}
if (age==50)
{
    printf("Half Century");
}
    return 0;
}