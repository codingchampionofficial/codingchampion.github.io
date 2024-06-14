#include <stdio.h>

int main()
{
	int rows;

	printf("Enter Pyramid Number Pattern Rows = ");
	scanf("%d", &rows);

	printf("Printing Pyramid Number Pattern\n");

	for (int i = 1; i <= rows; i++)
	{
		for (int j = rows; j > i; j--)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
}