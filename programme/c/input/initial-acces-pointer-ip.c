#include <stdio.h>

int main()
{   
    int num;
    int *pnum;
    
    pnum = &num;
    num = 200;

    printf("Information of the Normal num Variable\n");
    printf("num = %d Address of num = %u\n", num, &num);

    printf("Information of the Pointer pnum Variable\n");
    printf("num = %d Address of num = %u\n", *pnum, pnum);

}