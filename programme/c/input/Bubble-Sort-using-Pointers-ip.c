// C Program for Bubble Sort using Pointers and Functions
#include <stdio.h>
void Swap(int *x, int *y)
{
    int Temp;
    Temp = *x;
    *x = *y;
    *y = Temp;
}
void bubFunc(int a[], int number) {
    int i, j, temp;
    for(i = 0; i < number - 1; i++) {
        for(j = 0; j < number - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                Swap(&a[j], &a[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[100], size, i;
    
    printf("\n Please Enter the total Elements  :  ");
    scanf("%d", &size);
    
    printf("\n Please Enter the Array Elements  :  ");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    
    bubFunc(arr, size);
    printf("\n Array in Ascending Order : ");
    for(i = 0; i < size; i++)
    {
        printf(" %d \t", arr[i]);
    }
    printf("\n");
    return 0;
}