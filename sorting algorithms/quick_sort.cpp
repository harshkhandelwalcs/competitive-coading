#include<bits/stdc++.h>
using namespace std;

void printSortedArray(int *arr, int length)
{
    for (int l = 0; l < length; l++)
    {
        cout << arr[l] << " ";
    }
}

void swap(int *a , int *b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

int partition(int *arr, int startIndex, int endIndex){
    int pivot, index, i;
    index = startIndex;
    pivot = endIndex;
    for(i = startIndex;i<endIndex;i++){
        if(arr[i] < arr[pivot]){
            swap(&arr[i] , &arr[index]);
            index++;
        }
    }
    swap(&arr[pivot], &arr[index]);
    return index;
}

int randomPivotGeneration(int *arr, int startIndex, int endIndex){
    int pivot,n;
    n = rand();
    pivot = startIndex+n%(endIndex-startIndex+1);

    cout<< n << ", "<< pivot<<endl;
    swap(&arr[endIndex], &arr[pivot]);
    return partition(arr, startIndex, endIndex);
}

int quickSort(int *arr, int startIndex, int endIndex){
   if(startIndex < endIndex){
       int pindex = randomPivotGeneration(arr , startIndex, endIndex);
       quickSort(arr, startIndex, pindex-1);
       quickSort(arr, pindex+1, endIndex);
   }
   return 0;
}

int main(){
    int arr[] = {3,2,8,4,6,1};
    int arrLength = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, arrLength-1);
    printSortedArray(arr, arrLength);
}