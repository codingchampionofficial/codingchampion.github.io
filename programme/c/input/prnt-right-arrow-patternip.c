#include<stdio.h>
int main()
{
 	int i, j, rows; 
 	printf("Enter Right Arrow Star Pattern Rows =  ");
 	scanf("%d", &rows);

    printf("Right Arrow Star Pattern\n");
	for(i = 1; i <= rows; i++)
	{
        for(j = 1; j <= rows; j++)
        {
            if(j < i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
		printf("\n");
	}

    for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= rows; j++)
		{
            if(j < rows - i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }		
		}
		printf("\n");
	}
 	return 0;
}