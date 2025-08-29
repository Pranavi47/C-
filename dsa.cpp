#include <iostream>
using namespace std;

int main(){

    int nums[6] = {5, 15, 22, 1, -15, -2};
    int smallest = INT_MAX;
    int indexOfSmallest = -1;
    

    for(int i=0; i<6; i++){
    //smallest=min(nums[i], smallest);
    if(nums[i]<smallest){
        smallest = nums[i];
        indexOfSmallest = i;

    }
    }
    cout<<"smallest in array is:"<<smallest<<endl;
    cout<<"index:"<<indexOfSmallest<<endl;
    
    
    return 0;
}