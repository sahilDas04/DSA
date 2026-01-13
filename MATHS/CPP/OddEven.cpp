#include<bits/stdc++.h>
using namespace std;

vector<int> oddEven(int n){
    vector<int> even;
    vector<int> odd;
    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            even.push_back(i);
        }
        else{
            odd.push_back(i);
        }
    }
    return even, odd;
}

int main(){
    int n;

    cout<<"Enter the number : ";
    cin>>n;

    
}