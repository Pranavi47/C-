#include <iostream>
using namespace std;

void sumArr(int arr[], int sz){
    int sum = 0;
    for(int i = 0; i<sz; i++){
        sum += arr[i];
    }
   cout<< "sum =" << sum << endl ;
}
void prodArr(int arr[], int sz){
    int prod = 1;
    for(int i = 0; i<sz; i++){
        prod *= arr[i];
       
    }
   cout<< "prod =" << prod <<endl;
}
int main(){
    int arr[] = {1, 4, 7, 8, 2};
    int sz = 5;
    sumArr(arr, sz);
    
    prodArr(arr, sz);

return 0;
}