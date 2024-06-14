#include <stdio.h>
#include <string.h>
 
int main()
{
  	char Str[100], CopyStr[100];
  	int i;
 
  	printf("\n Please Enter any String :  ");
  	gets(Str);
 
  	for (i = 0; Str[i]!='\0'; i++)
  	{
  		CopyStr[i] = Str[i];
  	}
  	CopyStr[i] = '\0';

  	printf("\n String that we coped into CopyStr = %s", CopyStr);
  	printf("\n Total Number of Characters that we copied = %d\n", i);
  	
  	return 0;
}