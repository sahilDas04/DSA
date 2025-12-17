#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int dupl = n;
    int reverse_num = 0;
    while(n > 0){
        int last_digit = n % 10;
        reverse_num = (reverse_num * 10) + last_digit;
        n = n / 10;
    }
    if(dupl == reverse_num) return true;
    else return false;
}

int main(){
    int n;
    cout<<"ENter the number : ";
    cin>>n;
    cout<<palindrome(n)<<endl;
}