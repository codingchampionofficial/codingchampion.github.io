#include <stdio.h>

int main()
{
	int rows;

	printf("Enter Downward Traingle Mirrored Numbers Rows = ");
	scanf("%d", &rows);

	printf("Downward Traingle of Mirrored Numbers Pattern\n");

	for (int i = 1; i <= rows; i++)
	{
		for (int j = i; j <= rows; j++)
		{
			printf("%d ", j);
		}
		for (int k = rows - 1; k >= i; k--)
		{
			printf("%d ", k);
		}
		printf("\n");
	}
}