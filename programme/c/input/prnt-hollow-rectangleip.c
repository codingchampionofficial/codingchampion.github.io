/* C Program to Print Hollow Rectangle Star Pattern */
#include<stdio.h>
 
int main()
{
    int i, j, rows, columns;
     
    printf("Please Enter the Number of rows:\n");
    scanf("%d", &rows);
    
    printf("Please Enter the Number of Columns:\n");
    scanf("%d", &columns);
	 
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
	{
	  if(i == 0 || i == rows-1 || j == 0 || j == columns-1)
	  {
		printf("*");
	  }
	  else
	  {
		printf(" ");
	  }          
        }
        printf("\n");
    }
    return 0;
}