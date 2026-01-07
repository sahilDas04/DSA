#include<bits/stdc++.h>
using namespace std;

void hastMap(vector<int> &nums, int n){
    vector<int> hash(13);

    for(int i=0; i<nums.size(); i++){
        hash[nums[i]] += 1;
    }

    cout<<"The number is repeated : "<<hash[n]<<endl;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the number : ";
    cin>>x;

    hastMap(arr, x);
}