#include<bits/stdc++.h>
using namespace std;

int linear(vector<int> nums, int target){
    int n = nums.size();

    for(int i=0; i<n; i++){
        if(nums[i] == target){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    vector<int> nums(n);

    int target;
    cout<<"Enter the target : ";
    cin>>target;

    for(int i=0; i<nums.size(); i++){
        cout<<"Enter the element in the array : ";
        cin>>nums[i];
    }

    cout<<"The element is present in the array at the index : "<<linear(nums,target)<<endl;
}
