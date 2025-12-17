#include<iostream>
using namespace std;

int digits(int n){
    int count = 0;
    while(n>0){
        int last = n % 10;
        count++;
        n = n/10;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The count of digits : "<<digits(n)<<endl;
}