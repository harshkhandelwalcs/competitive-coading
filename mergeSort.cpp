#include <bits/stdc++.h>
using namespace std;

void printSortedArray(int *arr)
{
    for (int l = 0; l < 10; l++)
    {
        cout << arr[l] << " ";
    }
}

void merge(int *arr, int startIndex, int midIndex, int endIndex)
{
    int temp[endIndex - startIndex + 1];
    int i = startIndex;
    int j = midIndex + 1;
    int k = 0;

    while (i <= midIndex && j <= endIndex)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            k += 1;
            i += 1;
        }
        else
        {
            temp[k] = arr[j];
            k += 1;
            j += 1;
        }
    }

    while (i <= midIndex)
    {
        temp[k] = arr[i];
        k += 1;
        i += 1;
    }

    while (j <= endIndex)
    {
        temp[k] = arr[j];
        k += 1;
        j += 1;
    }

    for (i = startIndex; i <= endIndex; i++)
    {
        arr[i] = temp[i - startIndex];
    }
}

void mergeSort(int *arr, int startIndex, int endIndex)
{
    if (startIndex < endIndex)
    {
        int midIndex = (startIndex + endIndex) / 2;
        mergeSort(arr, 0, midIndex);
        mergeSort(arr, midIndex + 1, endIndex);
        merge(arr, startIndex, midIndex, endIndex);
    }
}

int main()
{
    int arr[] = {8, 5, 3, 4, 2, 9, 11, 7, 1, 15};
    int length = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, length - 1);
    printSortedArray(arr);
}

