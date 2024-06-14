/* C program to Print Number Pattern 1, 0 at Alternative Columns */

#include<stdio.h>
 
int main()
{
    int i, j, rows, columns;
     
    printf(" \nPlease Enter the Number of Rows : ");
    scanf("%d", &rows);
    
    printf(" \nPlease Enter the Number of Columns : ");
    scanf("%d", &columns);
     
    for(i = 1; i <= rows; i++)
    {
    	for(j = 1; j <= columns; j++)
		{
			if(j % 2 == 0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}       	
        }
        printf("\n");
    }
    return 0;
}