#include <stdlib.h>
#include <iostream>

using namespace std;

// function to print the given array 
void printArray(int array[], int size)
{ 
    int j;
    for (j = 0; j < size; j++)
    {
        cout <<" "<< array[j];  
    }
    cout << endl;
}
void insertionSort(int *arr, int arrayLength){
   int i;
   for (i = 1;i<arrayLength;i++) {
       int key = arr[i];
       int j = i-1;
       while(j>=0 && arr[j]>key){
         arr[j+1] = arr[j];
         j--;
       }
       arr[j+1] = key;
   }
   printArray(arr,arrayLength);
}

int main(){
    int arr[] = {8,3,5,2,7,1};
    int length = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, length);
}
