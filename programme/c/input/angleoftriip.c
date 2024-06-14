/* C Program to find Angles of a triangle if two angles are give */

#include<stdio.h>

int main()
{
  	float a, b, c;

  	printf("\n Please Enter two angles of a triangle \n");
  	scanf("%f%f",&a,&b);

  	c= 180 - (a + b);

  	printf("\n Third Angle of a Triangle = %.2f\n", c);

  	return 0;
}
