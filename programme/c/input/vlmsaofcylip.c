/* C Program to find Volume and Surface Area of a Cylinder */

#include<stdio.h>
#include<math.h>

int main()
{
  float radius, height;
  // L = Lateral Surface Area of a Cylinder, T = Top Surface Area
  float sa,Volume, L, T;

  printf("\n Please Enter the radius and height of a cylinder \n");
  scanf("%f %f", &radius, &height);

  sa = 2 * M_PI * radius * (radius + height);
  Volume = M_PI * radius * radius * height;
  L = 2 * M_PI * radius * height;
  T = M_PI * radius * radius;

  printf("\n Surface Area of a cylinder = %.2f", sa);
  printf("\n Volume of a Cylinder = %.2f", Volume);
  printf("\n Lateral Surface Area of a cylinder = %.2f", L);
  printf("\n Top OR Bottom Surface Area of a cylinder = %.2f", T);

  return 0;
}
