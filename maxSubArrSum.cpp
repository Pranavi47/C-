//{3, -4, 5, 4, -1, 7, -8}
//brute force approach. time complexity: O(n^2)
//max sub array sum
#include <iostream>
using namespace std;

int main(){
    int maxSum=INT_MIN;
    int arr[]={3, -4, 5, 4, -1, 7, -8};
    int n = 7;
    for(int st=0; st<n ; st++){
        int currSum = 0;
        for(int end = st; end < n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
            if (max)
        }
    }
    cout<<maxSum<<endl;
    return 0;

}