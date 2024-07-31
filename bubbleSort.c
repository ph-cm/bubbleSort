#include <stdio.h>
//Bubble Sort
//Compare elements adjacents and switch them if they were in a wrong position
void bubbleSort(int arr[], int n);
int main(int argc, char *argv)
{

    int arr[10] = {4, 7, 9, 3, 5, 12, 56, 9, 45, 1};
    int n = 10;

    printf("List unordered: ");
    for(int i = 0; i < n;i++)
    {
        printf("| %d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);

    printf("List ordered: ");
    for(int i = 0; i < n;i++)
    {
        printf("| %d ", arr[i]);
    }
    printf("\n");

    return 0;
}
void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < (n - i - 1); j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
