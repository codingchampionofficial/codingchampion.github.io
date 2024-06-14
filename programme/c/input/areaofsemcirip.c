#include <stdio.h>

int main()
{
    float clRadius, clArea, clPerimeter;

    printf("Enter the Semicircle Radius = ");
    scanf("%f",&clRadius);

    clPerimeter = 3.14 * clRadius;

    clArea = 0.5 * 3.14 * (clRadius * clRadius);

    printf("The Perimeter of a Semicircle = %.2f\n", clPerimeter);
    printf("The Area of a Semicircle = %.2f\n", clArea);

    return 0;
}
