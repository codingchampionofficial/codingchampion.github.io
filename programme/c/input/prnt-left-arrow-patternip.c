#include<stdio.h>
int main()
{
 	int i, j, rows; 
 	printf("Enter Left Arrow Star Pattern Rows =  ");
 	scanf("%d", &rows);

    printf("Left Arrow Star Pattern\n");
	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        for(j = i; j <= rows; j++)
        {
            printf("*");
        }
		printf("\n");
	}

    for(i = 1; i <= rows; i++)
	{
		for(j = 1; j < i; j++)
		{
			printf(" ");
		}
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
		printf("\n");
	}

 	return 0;
}