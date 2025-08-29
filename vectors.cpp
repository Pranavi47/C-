#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;//0

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    
    cout<<vec.size()<<endl;//is same
    cout<<vec.capacity()<<endl;//capacity gets doubled if there is no space

    return 0;
}
