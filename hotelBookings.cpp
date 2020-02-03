#include <bits/stdc++.h>
using namespace std;

int countOverlaps(int *arrival, int *departure)
{
    int startIndex = 0;
    int midIndex = 2;
    int endIndex = 5;
    int i = startIndex;
    int j = 0;
    int k = 0;
    int inversionCount = 0;
    int temp[endIndex - startIndex + 1];
    while (i <= midIndex && j <= endIndex)
    {
        if (arrival[i] <= departure[j])
        {
            i++;
            k++;
        }
        else
        {
            j++;
            k++;
            inversionCount = inversionCount + (midIndex - i + 1);
        }
    }
    return inversionCount;
}

int main()
{
    int arrival[] = {37, 34, 21, 25, 21, 43, 21, 14, 30, 30, 42, 32, 28, 25, 0, 47, 37 };
    int departure[] = {38, 62, 69, 28, 50, 62, 41, 43, 40, 43, 80, 76, 71, 55, 46, 67, 80};
    int  k = 15;
    int inversionCount = countOverlaps(arrival, departure);
    cout << "inversionCount - " << inversionCount << endl;
    if(k<inversionCount){
        cout<< "there is no room availability";
    }else{
        cout<< "room available";
    }
}