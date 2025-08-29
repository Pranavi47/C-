//{3, -4, 5, 4, -1, 7, -8}
//max sum sub array. most optimised
//time complexity:o(n)
 #include <iostream>
 using namespace std;

 int main(){
    int arr[]={-3, -4, -5, -4, -1, -7, -8};
    int n = 7;
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i = 0; i<n ; i++){
        currSum+=arr[i];
        maxSum = max(maxSum, currSum);
        //this loop is written in the end becomes sometimes
        //they may be a chance of having maxSum -ve in example{-1, -2, -4, -5}
        if(currSum<0){   // if sum becomes negative it resets to 0
            currSum = 0;
        }
    }
cout<<"max sum:"<<maxSum<<endl;
 }
