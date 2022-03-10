#include <stdio.h>
#include<conio.h>

int main()

{
int i, j, N=5;


for(j=N;j>=1; --j)
{

for(i=1; i<=j; i++)
{
printf("%d",i--);
}
printf("\n");
}

return 0;
}