#include<bits/stdc++.h>
using namespace std;

bool intriplet(vector<int>&nums){
    int left = INT_MAX;
    int mid = INT_MAX;

    for(int num : nums){
        if(num <= left){
            left = num;
        }

        else if(num <= mid){
            mid = num;
        }

        else{
            return true;
        }
    }

    return false;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cout<<"Enter the element : ";
        cin>>nums[i];
    }

    cout<<"The array contains the increasing triplet : "<<intriplet(nums)<<endl;
}