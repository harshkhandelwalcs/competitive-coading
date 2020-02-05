#include <bits/stdc++.h>
using namespace std;

void printPairedVector(vector<pair<int, int>> &pairedVector)
{
    for (int j = 0; j < pairedVector.size(); j++)
    {
        cout << pairedVector[j].first << "," << pairedVector[j].second << endl;
    }
}

bool sortByArrival(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.first < b.first);
}

void countAvailableRooms(vector<pair<int, int>> &pairedVector, int availableRooms)
{
    int j = 0;
    int countARooms = 0;
    int maxRooms = 0;
    while (j < pairedVector.size())
    {
        if (pairedVector[j].second == 1)
        {
            countARooms++;
            if (maxRooms < countARooms)
            {
                maxRooms = countARooms;
            }
        }
        else
        {
            countARooms--;
        }
        j++;
        cout << "count rooms required = " << countARooms << "," << maxRooms << endl;
    }

    if (maxRooms <= availableRooms)
    {
        cout << "available rooms";
    }
    else
    {
        cout << "no enough rooms available because available rooms are = " << availableRooms;
    }
}
void createPairAndSort(vector<int> &arrival, vector<int> &departure, int availableRooms)
{
    int i = 0;
    vector<pair<int, int>> pairedVector;
    for (i = 0; i < arrival.size(); i++)
    {
        pairedVector.push_back(make_pair(arrival[i], 1));
        pairedVector.push_back(make_pair(departure[i], -1));
    }
    printPairedVector(pairedVector);

    sort(pairedVector.begin(), pairedVector.end(), sortByArrival);
    printPairedVector(pairedVector);
    countAvailableRooms(pairedVector, availableRooms);
}

int main()
{
    vector<int> arrival{2, 2, 3, 4, 5};
    vector<int> departure{3, 4, 5, 6, 7};
    int availableRooms = 3;
    createPairAndSort(arrival, departure, availableRooms);
}