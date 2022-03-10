//Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote
#include<stdio.h>

    int main(){
    int age;

    printf("Enter age:\n");
    scanf("%d", &age);

    if(age >= 21)
    {
        printf("Candidate is eligible for casting his/her own vote");
    }
    else
    {
        printf("Candidate is not eligible for casting his/her own vote");
    }
    return 0;
}