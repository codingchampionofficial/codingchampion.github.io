#include <stdio.h>

int main()
{
    char msg[100];
    
    printf("Please enter Any String or Message = ");
    gets(msg);

    printf("The string that you entered = %s\n", msg);
    
    return 0;
}