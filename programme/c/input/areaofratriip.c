/* C Program to find Area of a Right Angled Triangle Example */

#include<stdio.h>
#include<math.h>
int main()
{
  float width, height, c, Area, Perimeter;
  printf("\n Please Enter height and width of the right angled triangle\n");
  scanf("%f%f",&width, &height);

  Area = 0.5 * width * height;
  c = sqrt((width*width) + (height*height));
  Perimeter = width + height + c;

  printf("\n Area of right angled triangle is: %.2f\n",Area);
  printf("\n Other side of right angled triangle is: %.2f\n",c);
  printf("\n Perimeter of right angled triangle is: %.2f\n", Perimeter);
  return 0;
}
