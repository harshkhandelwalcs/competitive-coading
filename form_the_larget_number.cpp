#include <bits/stdc++.h>
using namespace std;

int sortBy(string a, string b)
{
    cout << "string a = " << a << ", string b =  " << b << endl;
    string XY = a.append(b);

    // then append X at the end of Y
    cout << "string awew = " << a << endl;
    string YX = b.append(a);

    // Now see which of the two formed numbers is greater
    cout << "string ab =" << XY << ", string ba = " << YX << endl;
    return XY.compare(YX) > 0 ? 1 : 0;
}

string formLargetNumber(vector<string> &arr)
{
    sort(arr.begin(), arr.end(), sortBy);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
}

int main()
{
    vector<string> arr{"3", "30", "34", "5", "9"};
    formLargetNumber(arr);
}