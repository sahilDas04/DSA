#include<bits/stdc++.h>
using namespace std;

int armstrong(int n){
    int dup = n;
    int sum = 0;
    while(n > 0){
        int last_digits = n % 10;
        sum = sum + (last_digits * last_digits * last_digits);
        n = n / 10;
    }
    if(sum == dup) cout<<"The number is armstong number"<<endl;
    else cout<<"Nope!!!!"<<endl;
}

int main(){
    int n;
    cin>>n;
    cout<<armstrong(n)<<endl;
}