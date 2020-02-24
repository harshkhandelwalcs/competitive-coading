#include <bits/stdc++.h>
using namespace std;

void printSortedArray(int *arr, int length)
{
    for (int l = 0; l < length; l++)
    {
        cout << arr[l] << " ";
    }
}
int findMinIndex(int *arr, int start, int arrLength)
{
    int minIndex = start;
    start++;
    while (start < arrLength)
    {
        if (arr[start] < arr[minIndex])
        {
            minIndex = start;
        }
        start++;
    }
    return minIndex;
}

void selectionSort(int *arr, int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        int minIndex = findMinIndex(arr, i, arrLength);
        if (i != minIndex)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main()
{
    int arr[] = {2, 4, 9, 5, 1, 0};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, arrLength);
    printSortedArray(arr, arrLength);
}
