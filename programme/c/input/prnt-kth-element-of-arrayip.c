#include <stdio.h>

int main()
{
	int Size, i, k;

	printf("Please Enter the Array size = ");
	scanf("%d", &Size);

	int arr[Size];
	
	printf("Enter the Array %d elements : ", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter Kth Position Array Item to Check = ");
	scanf("%d", &k);

	printf("A[%d] Element in this Array = %d \n", k-1, arr[k-1]);
}