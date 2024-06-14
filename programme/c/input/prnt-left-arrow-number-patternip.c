#include <stdio.h>

int main()
{
	int rows, i, j;

	printf("Enter Left Arrow Number Pattern Rows = ");
	scanf("%d", &rows);

	printf("Printing Left Arrow Numbers Pattern\n");

	for (i = rows; i >= 1; i--)
	{
		for (j = i; j >= 1; j--)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	for (i = 2; i <= rows; i++)
	{
		for (j = i; j >= 1; j--)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}