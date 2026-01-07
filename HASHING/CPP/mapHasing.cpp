#include<bits/stdc++.h>
using namespace std;

void MopHash(vector<int> nums, int n){
    map<int,int> mop;

    for(int i=0; i<nums.size(); i++){
        mop[nums[i]] += 1;
    }

    for(auto it : mop){
        cout<<it.first <<"->"<<it.second<<endl;
    }

    cout<<"The reapeated number is "<<mop[n]<<endl;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the number you want to search : ";
    cin>>x;

    MopHash(arr, x);
}