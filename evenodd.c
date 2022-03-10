#include <stdio.h>
#include <conio.h>


void main()  {

    int myMan; 

    printf("Enter Your Number here : ");
    scanf(" %d", &myMan );


    if (myMan % 2 == 0 )
    printf(" %d is even. ", myMan);

    else 

    printf("%d is odd.", myMan);
}
