///using brute force. o(n^2)
#include<iostream>
#include<vector>
using namespace std;

int majorityEle(vector<int> nums){
    int n = nums.size();
   
    for(int val: nums){
        int freq = 0;
        for(int ele: nums){
            if(ele == val){
                freq++;
            }
        } 
        if (freq > n/2){
            return val;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {2, 1, 1, 1, 1, 1, 2};
    int result= majorityEle(nums);
    cout<< result<<endl;

    return 0;
}


//using sorting   O(nlogn)
#include<iostream>
#include<vector>
using namespace std;

int majorityEle(vector<int> nums){
    int n = nums.size();

    sort(nums.begin(), nums.end());

    int freq=0;
    int ans=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq = 1; ans = nums[i];
        }
        
        }
    if(freq>n/2){
        return ans;
    }
    return ans;
}


int main(){
    vector<int> nums ={1, 1, 2, 2, 2};
    int result = majorityEle(nums);
    cout<<result<<endl;
    return 0;
}

//Moore's Voting  O(n)
#include<iostream>
#include<vector>
using namespace std;

int majorityEle(vector<int> nums){
    int n = nums.size();
    int freq = 0;
    int ans = 0;
    for(int i =0; i<n; i++){
        if(freq==0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int> nums ={1, 2, 1, 1, 1, 2, 2};
    int result = majorityEle(nums);
    cout<<result<<endl;
    return 0;
}

