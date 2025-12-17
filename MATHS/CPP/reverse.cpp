#include<iostream>
using namespace std;

int reverse_number(int n){
    while(n > 0){
        int reverse = n % 10;
        cout<<reverse<<" ";
        n = n /10;
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    reverse_number(n);
}