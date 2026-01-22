#include<bits/stdc++.h>
using namespace std;

int smallestDivideK(int k){
    if(k % 2 == 0 || k % 5 == 0){
        return -1;
    }

    int remainder = 0;

    for(int i=1; i<=k; i++){
        remainder = (remainder * 10 + 1) % k;

        if(remainder == 0) return i;
    }
    return -1;
}

int main(){
    int n;

    cout<<"Enter the number : ";
    cin>>n;

    cout<<"The smallest divisible by K : "<<smallestDivideK(n)<<endl;
}