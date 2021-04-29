#include <stdio.h>
#include <conio.h>

int main(){
  int a, b, c;
  
  scanf("%d", &a);
  scanf("%d", &b);

  c = a < b ? a : b;

  printf( "The lesser number is :%d", c);
  return 0;
}