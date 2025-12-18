#include<bits/stdc++.h>
using namespace std;

int second_largest(vector<int> nums){
    // int maxi = INT_MIN;
    // int s_maxi = INT_MIN;
    // int n = nums.size();

    // for(int i=0; i<n; i++){
    //     if(nums[i] > maxi){
    //         maxi = nums[i];
    //     }
    // }

    // for(int i=0; i<n; i++){
    //     if(nums[i] > s_maxi && nums[i] < maxi){
    //         s_maxi = nums[i];
    //     }
    // }

    // return s_maxi;

    int n = nums.size();
    sort(nums.begin(), nums.end());

    int largest = nums[n-1];

    for(int i=n-2; i>=0; i--){
        if(nums[i] != largest){
            return nums[i];
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cout<<"Enter the elements : ";
        cin>>nums[i];
    }

    cout<<"The second largest number in the array : "<<second_largest(nums)<<endl;
}