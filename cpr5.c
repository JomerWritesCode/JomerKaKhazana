#include <stdio.h>
int main()
{
  int lines=5;
  int i=1;
  int j;
    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=i;j++)
    {
        printf("%d ",i*j);
    }
        printf("\n");
    }
    return 0;
}