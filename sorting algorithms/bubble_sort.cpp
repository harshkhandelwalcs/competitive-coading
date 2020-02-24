#include <bits/stdc++.h>
using namespace std;
void printSortedArray(int *arr, int length)
{
    for (int l = 0; l < length; l++)
    {
        cout << arr[l] << " ";
    }
}

void bubbleSort(int *arr, int length)
{
    for (int i = 0; i < length-1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {2, 8, 6, 4, 0, 9};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, arrLength);
    printSortedArray(arr, arrLength);
}