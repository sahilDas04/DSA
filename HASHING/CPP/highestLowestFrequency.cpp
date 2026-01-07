#include<bits/stdc++.h>
using namespace std;

void highLow(vector<int> num){
    map<int, int> mop;
    int n = num.size();

    for(int i=0; i<n; i++){
        mop[num[i]]++;
    }

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    for(auto it : mop){
        int count = it.first;
        int element = it.second;

        if(count < minFreq){
            minFreq = count;
            minEle = element;
        }

        if(count > maxFreq){
            maxFreq = count;
            maxEle = element;
        }
    }

    cout<<"The highest frequency element "<<maxEle<<endl;
    cout<<"The lowest frequency element "<<minEle<<endl;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cout<<"Enter the element ";
        cin>>arr[i];
    }

    highLow(arr);
    
}