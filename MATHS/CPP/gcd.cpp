#include<bits/stdc++.h>
using namespace std;

// This is approach is iterative one
// int gcd(int a,  int b){
//     if(a == 0){
//         return b;
//     }

//     if(b == 0){
//         return a;
//     }

//     while(a != b){
//         if(a > b){
//             a = a -b;
//         }
//         else{
//             b = a- b;
//         }
//     }

//     return a;
// }

// This is recursive approach
int gcd(int  a, int b){
    // Base case
    if(b==0) return a;

    // Recursive call
    gcd(b, a%b);
}

int main(){
    int a, b;

    cout<<"Enter the number 1 : ";
    cin>>a;

    cout<<"Enter the number 2 : ";
    cin>>b;

    cout<<"The Gcd of Number 1 & Number 2 : " << gcd(a, b)<< endl;
}