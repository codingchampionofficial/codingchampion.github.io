#include<stdio.h>
 
int main()
{
  int number, square;
 
  printf(" \n Please Enter any integer Value : ");
  scanf("%d", &number);
  
  square = number * number;
  
  printf("\n square of a given number %d is  =  %d", number, square);
 
  return 0;
}