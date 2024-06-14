#include<stdio.h>
int main()
{
 	int i, j, rows; 
 	printf("Enter Hollow Right Triangle Rows =  ");
 	scanf("%d", &rows);

    printf("Hollow Right Triangle Star Pattern\n");
	for(i = 1; i <= rows; i++)
	{
        if(i == 1 || i == rows)
        {
            for(j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j = 1; j <= i; j++)
            {
                if(j == 1 || j == i)
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