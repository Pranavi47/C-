#include <iostream>
#include <vector>
using namespace std;

//TC : O(nlogn) avg && best
//TC : O(n^2) worst -> occcurs when pivot is smallest or largest of array.
int partition(vector<int> &arr, int st, int end){ 

    int idx = st-1, pivot = arr[end];
    for(int j=st; j<end; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quicksort(vector<int> &arr, int st, int end){
    if(st<end){
        int pivIdx = partition(arr, st, end);
        //left
        quicksort(arr, st, pivIdx-1);
        //right
        quicksort(arr, pivIdx+1, end);
    }
}

int main(){
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    quicksort(arr, 0, arr.size()-1);

    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
    
}