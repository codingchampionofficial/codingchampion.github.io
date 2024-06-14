#include <stdio.h>

int main()
{
    int i, j, rows;
    
    printf("Enter K Shape Numbers Pattern Rows = ");
    scanf("%d",&rows);

    printf("\nThe K Shape Numbers Pattern\n"); 
    
    for (i = rows; i >= 1; i-- ) 
	{
		for (j = 1 ; j <= i; j++ ) 	
		{
			printf("%d ", j);
		}
		printf("\n");
	}
		
	for (i = 2 ; i <= rows; i++ ) 
	{
		for (j = 1; j <= i; j++ ) 	
		{
			printf("%d ", j);
		}
		printf("\n");
	}
    return 0;
}