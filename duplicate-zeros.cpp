#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr)
{
    for (int l = 0; l < arr.size(); l++)
    {
        cout << arr[l] << ",";
    }
}

void duplicateZeros(vector<int> &arr)
{
    vector<int> temp;
    int i = 0;
    int j = 0;
    while (i < arr.size())
    {
        temp.push_back(arr[i]);
        if (arr[i] == 0)
        {
            temp.push_back(0);
        }

        i++;
    }

    for (int k = 0; k < arr.size(); k++)
    {
        arr[k] = temp[k];
    }

    // printArray(arr);
}

int main()
{
    vector<int> arr{1, 0, 2, 3, 0, 4, 5, 0};
    duplicateZeros(arr);
}