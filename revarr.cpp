#include <iostream>
using namespace std;
//time complexity is O(n)
//without using function
int main(){
    int arr[]={1, 2, 3, 4};
    int size = 4;
    int start = 0; 
    int end = size - 1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    
for(int i=0; i< size; i++){
    cout<<arr[i]<<endl;
}
return 0;
}

//with using function
void reverseArray(int arr[], int sz){
    int start = 0; int end = sz - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;

    reverseArray(arr, sz);
    for(int i = 0; i< sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
