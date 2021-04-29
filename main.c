#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
  int myInt;
  float myFloat;
  char myChar;
  double myDouble;
  long double myKiddo;
  long int myLD;
  unsigned int unsigned_int;
    signed int signed_int;




  /*Here are integers
  int double etc*/ 




  printf("\nEnter A Long Double: ");
  scanf("%Lf", &myKiddo);

  printf("\nEnter A Double: ");
  scanf("%lf", &myDouble);

  printf("\nEnter A Long Int: ");
  scanf("%ld", &myLD);

  printf("\nEnter an integer : ");
  scanf("%d", &myInt);

  printf("\nEnter float here : ");
  scanf("%f", &myFloat);

  printf("\nEnter character here : ");
  scanf(" %c", &myChar);

  printf("Enter unsigned int : ");
    scanf("%u", &unsigned_int);
    printf("\n");

    printf("Enter signed integer : ");
    scanf("%i", &signed_int);

   


  printf("\nYou entered the following values\nInt : %d\nFloat : %f\nChar : %c \nDouble : %lf \nLong Int : %ld \nLong Double : %Lf \nUnsigned Int: %u \nSigned Int: %i", myInt, myFloat, myChar, myDouble, myLD, myKiddo, unsigned_int, signed_int);
}
