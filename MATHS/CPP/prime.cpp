#include<bits/stdc++.h>
using namespace std;

void prime_number(int n){
    int cnt = 0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i == 0){
            cnt ++;
            if((n/i)!=i) cnt++;
        }
    }
    if(cnt == 2) cout<<"Prime Number !!!!"<<endl;
    else{
        cout<<"Nopeeee!!!!!"<<endl;
    } 
}

int main(){
    int n;
    cin>>n;
    if(n == 1){
        cout<<"Prime Number !!!!"<<endl;
    }
    else{
        prime_number(n);
    }
}