#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> nums){
    int n = nums.size();

    int maxi = INT_MIN;

    for(int i=0; i<n; i++){
        if(nums[i]>maxi){
            maxi = nums[i];
        }
    }
    return maxi;
}

int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }

    cout<<"The largest number in the array "<<largest(arr)<<endl;
}