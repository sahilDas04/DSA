#include<bits/stdc++.h>
using namespace std;

int water(vector<int>&height){
    int left = 0, right = height.size()-1;
    int maxArea = 0;

    while(left < right){
        maxArea = max(maxArea, (right - left) * min(height[left], height[right]));

        if(height[left] < height[right]){
            left++;
        }
        
        else{
            right--;
        }
    }
    return maxArea;
}

int main(){
    int n;
    cout<<"Enter the number of pilars : ";
    cin>>n;

    vector<int> height(n);

    for(int i=0; i<n; i++){
        cout<<"Enter the pilar height : ";
        cin>>height[i];
    }

    cout<<"The container with most water : "<<water(height)<<endl;
}