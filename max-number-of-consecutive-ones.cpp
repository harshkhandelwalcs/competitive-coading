#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int countOnes = 0;
    int maxCount = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            countOnes++;
            if (maxCount < countOnes)
            {
                maxCount = countOnes;
            }
        }
        else
        {
            countOnes = 0;
        }
    }
    return maxCount;
}

int main()
{
    vector<int> binary{1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1};
    int maxOnesCount = findMaxConsecutiveOnes(binary);
    cout << "max count = " << maxOnesCount;
}