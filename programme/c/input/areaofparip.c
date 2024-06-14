#include <stdio.h>

int main()
{
    float pgramBase, pgramHeight, pgramArea;

    printf("Enter the Parallelogram Base = ");
    scanf("%f",&pgramBase);

    printf("Enter the Parallelogram Height = ");
    scanf("%f",&pgramHeight);

    pgramArea = pgramBase * pgramHeight;

    printf("The Area of a Parallelogram = %.2f\n", pgramArea);

    return 0;
}
