#include<bits/stdc++.h>
using namespace std;


vector<int> Product(vector<int> nums){
    int n = nums.size();
    vector<int> ans(n, 1);

    // Brute Force Approach Used Division Operator
    // int product = 1;
    // for(int i=0; i<n; i++){              TC for this loop is O(n)
    //     product *= nums[i];
    // }

    // for(int i=0; i<n; i++){              TC for this loop is O(n)    
    //     ans.push_back(product/nums[i]);
    // }                                    The Total TC is O(n+n) Which is equal to O(2n)  SC is O(n)


    // Brute Force Approach Use nested loop
    // for(int i=0; i<n; i++){ 
    //     int pro = 1;
    //     for(int j=0; j<n; j++){
    //         if(i != j){
    //             pro *= nums[j];
    //         }
    //     }
    //     ans.push_back(pro);              Tc of this algorithm is O(n^2)  SC is O(n)
    // }

    // Optimised in Time complexity not int the Space complexity
    // vector<int> prefix(n, 1);            SC of this array is O(n)

    // for(int i=1; i<n; i++){              TC of this loop is O(n)
    //     prefix[i] = prefix[i-1] * nums[i-1];
    // }

    // vector<int> sufix(n, 1);              SC of this array is O(n)

    // for(int i=n-2; i>=0; i--){            TC of this loop is O(n)
    //     sufix[i] = sufix[i+1] * nums[i+1];
    // }

    // for(int i=0; i<n; i++){               TC of this loop is O(n)
    //     ans[i] = prefix[i] * sufix[i];
    // }                                      The total TC is O(n+n+n) = O(3n) = O(n) and the Total SC is O(n+n) = O(2n) = O(n)

    // This is for both optimised in TC an SC
    for(int i=1; i<n; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }

    int suffix = 1;
    for(int i=n-2; i>=0; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    return ans;
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

    vector<int> result = Product(nums);
    cout<<"The Product Array Except Itself : ";
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
}