
/* C Program to find Sum of each row and column of a Matrix */

#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns, a[10][10], Sum;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
        printf("Enterd Matrix\n");
 		for(rows = 0; rows < j; rows++)
  		{
   			for(columns = 0; columns < i; columns++)
    		{
      			printf("%d \t ", a[rows][columns]);
    		}
    		printf("\n");
  		}
   	  
 	for(rows = 0; rows < i; rows++)
  	{
  		Sum = 0;
  		for(columns = 0;columns < j; columns++)
  		{
  			Sum = Sum + a[rows][columns];
		}
   		printf("\n The Sum of Elements of a Rows in a Matrix =  %d", Sum );
  	}

 	for(rows = 0; rows < i; rows++)
  	{
  		Sum = 0;
  		for(columns = 0;columns < j; columns++)
  		{
  			Sum = Sum + a[columns][rows];
		}
   		printf("\n The Sum of Elements of a Columns in a Matrix =  %d", Sum );
  	}  	

 	return 0;
}