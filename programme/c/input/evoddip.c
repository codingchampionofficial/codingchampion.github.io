#include<stdio.h> 
int main() 
{  
    int number;
    printf(" Enter any integer value :");
     scanf("%d", &number); 
    if ( number%2 == 0 ) //Check whether remainder is 0 or not
      {
        printf("%d is EVEN NUMBER \n", number);
      }
     else
     { 
       printf("%d is ODD NUMBER \n", number); 
       return 0;
      }
}