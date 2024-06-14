#include <stdio.h> 
int main()
 {  
    int a, b;
    printf("Please Enter first values\n"); 
    scanf("%d", &a); 
    printf("Please Enter second values\n"); 
    scanf("%d", &b); 
    if(a > b)
     { 
       printf("%d is Larger\n", a);
     }
     else if (b > a)
     { 
       printf("%d is Larger\n", b); 
    }
     else 
    {
     	printf("Both are Equal\n");
     } 
    return 0;
 }