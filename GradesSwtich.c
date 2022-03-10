#include <stdio.h>
#include <conio.h>

int main(){
    int a = 1;

    printf("Enter Marks : ");
    scanf("%d", &a);

    switch (a)
    {
    case 9:
        (a <= 100 || a >= 90) ? printf("Grade is A") : printf("ugabuga");
        break;

    case 8:
        (a <= 90 || a >= 80) ? printf("Grade is B") : printf("ugabuga");
        break;

    case 7:
        (a <= 80 || a >= 70) ? printf("Grade is C") : printf("ugabuga");
        break;

    case 6:
        (a <= 70 || a >= 60) ? printf("Grade is D") : printf("ugabuga");
        break;
    
    case 5:
        (a < 70) ? printf("Grade is F") : printf("ugabuga");
        break;
    
    default:
        printf("You've entered the wrong value.");
        break;
    }
}