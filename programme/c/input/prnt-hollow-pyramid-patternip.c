#include<stdio.h>
int main()
{
 	int i, j, rows; 
 	printf("Enter Hollow Star Pyramid Rows =  ");
 	scanf("%d", &rows);

    printf("Hollow Star Pyramid Pattern\n");
	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        if(i == 1 || i == rows)
        {
            for(j = 1; j <= i * 2 - 1; j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j = 1; j <= i * 2 - 1; j++)
            {
                if(j == 1 || j == i * 2 - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        
		printf("\n");
	}

 	return 0;
}