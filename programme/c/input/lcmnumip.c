#include <stdio.h>

int main()
{
    int Num1, Num2, max_Value;

    printf("Please Enter fist integer Values \n");
    scanf("%d", &Num1);
    printf("Please Enter second integer Values \n");
    scanf("%d",&Num2);
    
    max_Value = (Num1 > Num2)? Num1 : Num2;
    
    while(1) //Alway True
    {
    	if(max_Value % Num1 == 0 && max_Value % Num2 == 0) 
    	{
    		printf("LCM of %d and %d = %d", Num1, Num2, max_Value);
    		break;
		}
		++max_Value;
	}
    return 0;
}