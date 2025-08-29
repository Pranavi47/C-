#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target){
    for (int i = 0; i<sz; i++){
        if(arr[i] == target){
            return i;//FOUND
        }
    }
    return -1;//NOTFOUND

}

int main(){
    int arr[]= {4, 2, 7, 1, 2, 5};
    int sz = 6;
    int target = 7;
    
    linearSearch(arr, sz, target);
    cout<<linearSearch(arr, sz, target)<<endl;
    return 0;


}