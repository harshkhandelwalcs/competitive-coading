#include <bits/stdc++.h>
using namespace std;

int maxSumOfSubArray(int *arr, int arrLength)
{
    int i = 0, j = 0, k =0;
    int sum = 0;
    int max = 0;
    // for (i = 0; i < arrLength; i++)
    // {
    //     int sum = 0;
    //     for (j = i; j < arrLength; j++)
    //     {

    //         sum = sum + arr[j];
    //         if (sum > max)
    //         {
    //             max = sum;
    //         }
    //         cout << "sum 2 = " << sum << endl;
    //     }
    // }
    for (j = 0; j < arrLength; j++)
    {
        sum = sum + arr[j];
        if (sum > max)
        {
            max = sum;
            cout << "max = " << max << endl;
            k=j;
        }
        else if (sum < 0)
        {
            sum = 0;
            i = j+1;;
        }        
    }
    cout << "max xccc= " << max << endl;
    cout << "indexes" << i << "  " << k;

    return max;
}

int main()
{
    int arr[] = {1, 2, 3, 4, -10};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    int sum = maxSumOfSubArray(arr, arrLength);
    cout << "sum1 = " << sum;
}