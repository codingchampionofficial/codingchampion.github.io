/* C Program to find Sum of rows in a Matrix  */

#include<stdio.h>
 
int main()
{
    int i, j, rows, columns, a[10][10], Sum;
    
    printf("Please Enter Number of rows and columns  :  ");
    scanf("%d %d", &i, &j);
    
    printf("Please Enter the Matrix Row and Column Elements \n");
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
        for(columns = 0; columns < j; columns++)
        {
            Sum = Sum + a[rows][columns];
        }
        printf("The Sum of Elements of a Rows in a Matrix =  %d \n", Sum );
    }
    
    return 0;
}