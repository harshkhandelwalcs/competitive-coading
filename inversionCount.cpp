#include <bits/stdc++.h>
using namespace std;

int merge(int *arr, int start, int mid, int end)
{
    int temp[end - start + 1];
    int i = start;
    int j = mid + 1;
    int k = 0;
    int inversionCount = 0;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
            inversionCount = inversionCount + (mid + 1 - i);
        }
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (i = start; i <= end; i++)
    {
        arr[i] = temp[i - start];
    }
    cout << "aa" << inversionCount << endl;
    return inversionCount;
}

int mergeSort(int *arr, int start, int end)
{
    int inversionCount = 0;
    if (start < end)
    {
        int mid = (start + end) / 2;
        inversionCount += mergeSort(arr, start, mid);
        inversionCount += mergeSort(arr, mid + 1, end);
        inversionCount += merge(arr, start, mid, end);
    }

    return inversionCount;
}

void printSortedArray(int *arr, int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 20, 6, 4, 5};
    int arrayLength = (sizeof(arr) / sizeof(int));
    cout << "afdfsdf -- " << arrayLength << endl;
    int ans = mergeSort(arr, 0, arrayLength - 1);
    cout << "ans --" << ans << " ";
    // printSortedArrsay(arr, arrayLength);
    return 0;
}



