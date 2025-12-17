#include<iostream>
using namespace std;

void digits(int n){
    while(n>0){
        int last = n % 10;
        cout<<last<<endl;
        n = n/10;
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    digits(n);
}