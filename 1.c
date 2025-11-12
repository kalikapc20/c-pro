#include <stdio.h>
#include <math.h>
#include <string.h>
void printArray(int arr[], int n);
void reverse (int arr[], int n);
int main()
{
    int n;

    printf("Array Reversal of Integer array \n");
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {    printf("Enter array element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

 reverse(arr, n);
 printArray(arr, n);
    printf("\n");
    return 0;
}
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    
}
void reverse (int arr[], int n){
for (int i = 0; i < n/2; i++)

{


  int  firstVal = arr[i];
   int lastVal = arr[n - i - 1];
   arr[i]= lastVal;
    arr[n - i - 1] = firstVal;
}
}