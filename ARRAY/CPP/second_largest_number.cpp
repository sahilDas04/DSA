#include<bits/stdc++.h>
using namespace std;

int second_largest(vector<int> nums){
    int maxi = INT_MIN;
    int s_maxi = INT_MIN;
    int n = nums.size();

    for(int i=0; i<n; i++){
        if(nums[i] > maxi){
            maxi = nums[i];
        }
    }

    for(int i=0; i<n; i++){
        if(nums[i] > s_maxi && nums[i] < maxi){
            s_maxi = nums[i];
        }
    }

    return s_maxi;
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