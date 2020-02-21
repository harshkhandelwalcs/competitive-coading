#include<bits/stdc++.h>
using namespace std;

void printSortedArray(int *arr, int length)
{
    for (int l = 0; l < length; l++)
    {
        cout << arr[l] << " ";
    }
}

void merge(int *arr, int startIndex, int midIndex, int endIndex){
    int temp[endIndex-startIndex+1];
    int i = startIndex;
    int j = midIndex+1;
    int k =0;
    while(i<=midIndex && j <= endIndex){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    while(i<= midIndex){
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j<= endIndex){
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(i = startIndex ; i<=endIndex;i++){
        arr[i] = temp[i-startIndex];
    }

}

void mergeSort(int *arr, int startIndex, int endIndex){
    if(startIndex<endIndex){
        int midIndex = (startIndex+endIndex)/2;
        mergeSort(arr, startIndex, midIndex);
        mergeSort(arr, midIndex+1, endIndex);
        merge(arr, startIndex, midIndex, endIndex);
    }
}

int main(){
    int arr[] = {8,3,4,9,12,34,1};
    int length = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, length-1);
    printSortedArray(arr,length);

}