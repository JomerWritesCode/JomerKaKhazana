#include <stdio.h>

int main()
{
	int answer;
	int r, c;

	printf("\nEnter number of rows : ");
	scanf(" %i", &r);

	printf("\nEnter number of columns : ");
	scanf(" %i", &c);

	int hurray[r][c];

	for (int i = 0; i < r; i++)
    {

		for (int j = 0; j < c; j++)
        {

			printf("Enter number at [%i, %i] : ", i + 1, j + 1);
			scanf(" %i", &answer);
			hurray[i][j] = answer;
		}
	}
	printf("Array is : \n");
	for (int i = 0; i < r; i++){
		printf("[ ");
		for (int j = 0; j < c; j++)
        {
			printf("%i ", hurray[i][j]);
		}

		printf("]\n");
	}
	return 0;
}