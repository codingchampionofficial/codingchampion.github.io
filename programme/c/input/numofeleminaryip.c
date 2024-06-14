#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};

	int nums = sizeof(arr) / sizeof(arr[0]);

    printf("Total Number of Array Items = %d\n", nums);

    return 0;
}
