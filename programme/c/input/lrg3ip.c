#include <stdio.h>

int main()
{
 int a, b, c;

 printf("Please Enter first number\n");
 scanf("%d", &a);
 printf("Please Enter second number\n");
 scanf("%d", &b);
 printf("Please Enter third number\n");
 scanf("%d", &c);
 
 if (a > b && a > c) 
  {
   printf("\n%d is Highest Among both %d and %d", a, b, c); 
  }
 else if (b > a && b > c) 
  {
   printf("\n%d is Highest Among both %d and %d", b, a, c);
  }
 else if (c > a && c > b) 
  {
   printf("\n%d is Highest Among both %d and %d", c, a, b);
  }
 else 
  {
   printf("\nEither any two values or all the three values are equal");
  } 
 return 0;
}