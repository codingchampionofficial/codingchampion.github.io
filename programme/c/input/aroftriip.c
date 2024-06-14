#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, c, Perimeter, s, Area;

  printf("\nPlease Enter first side of triangle\n");
  scanf("%f",&a);
  printf("\nPlease Enter second side of triangle\n");
  scanf("%f",&b);
  printf("\nPlease Enter third side of triangle\n");
  scanf("%f",&c);


  Perimeter = a+b+c;
  s = (a+b+c)/2;
  Area = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("\n Perimeter of Traiangle = %.2f\n", Perimeter);
  printf("\n Semi Perimeter of Traiangle = %.2f\n",s);
  printf("\n Area of triangle = %.2f\n",Area);

  return 0;
}
