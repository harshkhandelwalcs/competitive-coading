#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &numbers, int target)
{
    int i = 0;
    // int j = 0;
    vector<int> sum;
    for (i = 0; i < numbers.size(); i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            if ((numbers[i] + numbers[j]) == target)
            {
                sum.push_back(i + 1);
                sum.push_back(j + 1);
                cout << sum[0] << "," << sum[1];
                return sum;
            }
        }
    }
}

int main()
{
    vector<int> sortedArray{2, 7, 11, 15};
    twoSum(sortedArray, 9);
}