#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int maxproduct(vector<int> nums) {
    int pre = 1;
    int suf = 1;
    int ans = INT_MIN;

    for(int i=0; i<nums.size(); i++){
        if(pre==0) pre = 1;
        if(suf==0) suf = 1;

        pre *= nums[i];
        suf *= nums[i];

        ans = max(ans, max(pre, suf));
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }

    int result = maxproduct(arr);

    cout<<"The maxSubarray product is "<<result<<endl;
}