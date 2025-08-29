//iterative method
#include <iostream>
using namespace std;
//time complexity O(logn) 

int binSearch(vector<int> arr, int tar){
    int st = 0, end = arr.size()-1;
   
    while(st<=end){
        int mid = st + (end - st)/2;// we are using this formula instead of 
        //(st + end)/2 to avoid overflow problem while solving problems on diff platforms
        if(tar < arr[mid]){
            end = mid - 1;
        }
        else if(tar > arr[mid])
        {
            st = mid + 1; 
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};//odd
    int tar1 = 12;
    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};//even
    int tar2 = 8;
    cout<< binSearch(arr1, tar1)<<endl;
    cout<< binSearch(arr2, tar2)<<endl;

    return 0;
}
--------------------------------------------------
--------------------------------------------------

//binSearch using recursion
#include <iostream>
using namespace std;

int recurBinSearch(vector<int> arr, int tar, int st, int end){
    if(st<=end){
        int mid = st +(end-st)/2;

        if(tar>arr[mid]){
            return recurBinSearch(arr, tar, mid+1, arr.size()-1);
        }
        else if(tar<arr[mid]){
            return recurBinSearch(arr, tar, 0, mid-1);
        }
        else{
            return mid;
        }
    }
    return -1; 
}

int main(){
    vector<int> arr1 ={-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 40;
    vector<int> arr2 ={-1, 0, 3, 5, 9, 12};
    int tar2 = 0;
    cout<<recurBinSearch(arr1, tar1, 0, arr1.size()-1)<<endl;
    cout<<recurBinSearch(arr2, tar2, 0, arr2.size()-1)<<endl;
    return 0;
}