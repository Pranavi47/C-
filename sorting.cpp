#include <iostream>
using namespace std;

//BUBBLE SORT   O(n^2).    ascending order
//if want desc order we have to change the sign of comparision
int main(){
    int arr[] = {4, 1, 5, 2, 3};
    int n = 5;

    for(int i = 0; i < n-1; i++){ // this in separate bubble sort function
        bool isSwap = false;//when given array is already sorted
        for(int j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
            if(!isSwap){
                return;
            }

        }
    }
        for(int i=0; i< n; i++){//we can include this in separate print function
        cout<< arr[i]<<" ";
        }
        cout<<endl;
        return 0;
    }

//SELECTION SORT. opposite of bubble sort O(n^2)

void selectionSort(int arr[], int n){

    for(int i = 0; i<n-1; i++){
        int smallestIdx = i; //unsorted part starting
        for(int j = i+1; j<n; j++){
            if(arr[j]< arr[smallestIdx]){
                smallestIdx = j;
                
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
//INSERTION SORT.  O(n^2) works like cards game
void insertionSort(int arr[], int n){
   for(int i = 1; i<n; i++){
   int curr = arr[i];
   int prev = i-1;
   while(prev>=0 && arr[prev]>curr){
    arr[prev+1]=arr[prev];
    prev--;
   }
   arr[prev+1]=curr;
   } 
  
}

int main(){
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    insertionSort(arr, n);
    //selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}

