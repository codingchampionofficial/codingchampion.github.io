/* C program to Print Square Star Pattern */
#include<stdio.h>
 
int main()
{
    int i, j, Side;
     
    printf("Please Enter Any Side of a Square\n");
    scanf("%d", &Side);
     
    for(i = 0; i < Side; i++)
    {
        for(j = 0; j < Side; j++)
	{
           printf("* ");
        }
        printf("\n");
    }
    return 0;
}