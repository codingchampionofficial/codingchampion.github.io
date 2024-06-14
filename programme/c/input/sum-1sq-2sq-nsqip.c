/* C Program to Calculate Sum of series 1²+2²+3²+....+n² */
#include <stdio.h>

int main()
{
  int Number, Sum = 0;

  printf("\n Please Enter any positive integer \n");
  scanf(" %d",&Number);

  Sum = (Number * (Number + 1) * (2 * Number + 1 )) / 6;
 
  printf("\n The Sum of Series for %d = %d ",Number, Sum);

}