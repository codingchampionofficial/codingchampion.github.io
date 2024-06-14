#include <stdio.h>

int main()
{
	int rows;

	printf("Enter Inverted Triangle Number Pattern Rows = ");
	scanf("%d", &rows);

	printf("Printing Inverted Triangle Number Pattern\n");

	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= rows - i + 1; k++)
		{
			printf("%d ", k);
		}
		printf("\n");
	}
}