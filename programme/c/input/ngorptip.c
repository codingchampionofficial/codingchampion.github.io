#include <stdio.h> 
int main() 
{ 
  int n;
  printf("Enter any number:\n");
  scanf("%d",&n); 
 if (n > 0)
{
  printf("%d is Positive", n); 
}

else if (n<0)
{
printf("%d is negative value",n);

 } 
else
{ 
printf("you have entered zero");
 return 0; 
}

}