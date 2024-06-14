#include <stdio.h>

int main()
{
  int yr;
 
  printf("\n Please Enter year \n ");
  scanf("%d", &yr);
 
  if (( yr%400 == 0)|| (( yr%4 == 0 ) &&( yr%100 != 0)))
      printf("\n %d is a Leap year \n", yr);
  else
      printf("\n %d is not leap year \n", yr);
  
   return 0;
}