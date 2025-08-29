#include <iostream> //total complexity (O(logn * n)) == O(nlogn)
//sc: O(n)
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int end, int mid){ //for this function TC://O(n)
    vector<int> temp;
    int i = st, j = mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0; idx<temp.size(); idx++){
        arr[idx+st]=temp[idx];
    }

}

void mergesort(vector<int> &arr, int st, int end){//TC:O(logn)
    int mid = st + (mid - st)/2;
    if(st<end){ 
        //left half
        mergesort(arr, st, mid);
         //right half
        mergesort(arr, mid+1, end);
        merge(arr, st, end, mid);
    }

}
int main(){
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    
    mergesort(arr, 0, arr.size()-1);
    for(int val:arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}