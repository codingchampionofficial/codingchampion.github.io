/* C Program to find Area Of a Triangle using base and height */

#include<stdio.h>

int main()
{
  	float base, height, area;

  	printf("\n Please Enter the Base of a Triangle  :  ");
  	scanf("%f", &base);

  	printf("\n Please Enter the Height of a Triangle  :  ");
  	scanf("%f", &height);

  	area = (base * height) / 2;

  	printf("\n The Area of a Triangle using Base and Height = %.2f\n", area);

  	return 0;
}
