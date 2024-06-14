/* C Program to Print Hollow Square Star Pattern */
#include<stdio.h>
 
int main()
{
    int i, j, Side;
     
    printf("Please Enter Any Side of a Square\n");
    scanf("%d", &Side);
    
    printf("Printing Hallow Square Star Pattern \n"); 
    for(i = 0; i < Side; i++)
    {
    	for(j = 0; j < Side; j++)
    	{
    	   if(i == 0 || i == Side-1 || j == 0 || j == Side-1)
    	   {
    		printf("* ");
	   }
	   else
	   {
		printf("  ");
	   }         
        }
        printf("\n");
    }
    return 0;
}