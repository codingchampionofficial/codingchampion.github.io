#include <stdio.h> 
#include <ctype.h>

int main()
{
  char Ch;
 
  printf("\n Please Enter any alphabet\n");
  scanf(" %c", &Ch);

  if (isalpha(Ch) )
   {  
     Ch = toupper(Ch); 
     printf ("\n Uppercase of Entered character is %c", Ch);
   }
  else
   {
     printf("\n Please Enter Valid Alphabet");
   }  
}