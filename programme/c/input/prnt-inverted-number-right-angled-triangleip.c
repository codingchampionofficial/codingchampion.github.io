/* C Program to Print Inverted Right Triangle Number Pattern */

#include <stdio.h>
 
int main() 
{
  	int rows, i, j;
	
  	printf("Please Enter the Number of Rows:  ");
  	scanf("%d", &rows);
	
  	for ( i = rows; i >= 1; i-- ) 
  	{
      	for ( j = 1 ; j <= i; j++ ) 
      	{
          	printf("%d ", i);
      	}
      	printf("\n");
  	}
  	return 0;
}
