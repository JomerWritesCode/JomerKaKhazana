#include <stdio.h>
#include <conio.h>

void Morning();
void Afternoon();
void Evening();

int main(){
    printf("Calling Morning.\n");
    Morning();
    printf("Morning gone afternoon coming\n");
    Afternoon();
    printf("Afternoon gone evening coming\n");
    Evening();
    printf("Sojao bhai\n");
    return 0;
}

void Morning(){
    printf("Good morning everyone.\n");
}

void Afternoon(){
    printf("Good afternoon everyone.\n");
}

void Evening(){
    printf("Good evening everyone.\n");
}