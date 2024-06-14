#include<stdio.h>
 int main()
 { 	
   int i, n;
   printf("\n Please Enter the Maximum Limit Value : "); 	
   scanf("%d", &n); 
  	printf("\n Even Numbers between 1 and %d are : \n", n); 	

   for(i =1;i<=n;i++) 
   { 
    	if ( i%2==0)
     	{
         printf(" %d\t", i);
     	} 
   	} 
  	return 0 ;    
 } 