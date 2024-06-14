#include<stdio.h>
int main()
{
    int i, j, k, rows;
    printf("Enter Rhombus Star Pattern Rows =  ");
    scanf("%d", &rows);

    printf("Rhombus Star Pattern\n");
    for(i = rows; i >= 1; i--)
    {
        for(j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= rows; k++)
        {
            printf("*");
        }         
        printf("\n");   
    }
    return 0;
}