#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, rows, columns, normal = 0;

	printf("Enter Normal Matrix Rows and Columns =  ");
	scanf("%d %d", &rows, &columns);

	int Norm_arr[rows][columns];

	printf("Please Enter the Normal Matrix Items =  \n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			scanf("%d", &Norm_arr[i][j]);
		}
	}
        printf("Enterd Matrix\n");
 		for(rows = 0; rows < j; rows++)
  		{
   			for(columns = 0; columns < i; columns++)
    		{
      			printf("%d \t ", Norm_arr[rows][columns]);
    		}
    		printf("\n");
  		}

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			normal = normal + (Norm_arr[i][j]) * (Norm_arr[i][j]);
		}
	}
	float actNormal = sqrt(normal);
	printf("\nThe Square Of the Matrix = %d", normal);
	printf("\nThe Normal Of the Matrix = %.2f\n", actNormal);
}