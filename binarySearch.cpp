#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int arrLength, int target)
{
    int start = 0;
    int end = arrLength - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2, 5, 6, 8, 11, 12, 15, 18};
    int arrLen = sizeof(arr) / sizeof(arr[0]);
    int target = 15;
    int targetIndex = binarySearch(arr, arrLen, target);
    cout << "Target Index - " << targetIndex;
}