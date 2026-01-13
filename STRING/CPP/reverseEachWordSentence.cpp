#include<bits/stdc++.h>
using namespace std;

// Reverse only each word

// void reverseSentence(string s){
//     int start = 0;

//     for(int i=0; i<=s.size(); i++){
//         if(i == s.size() || s[i] == ' '){
//             reverse(s.begin() + start, s.begin() + i);
//             start = i + 1;
//         }
//     }
//     cout<<"The reverse string : "<<s<<endl;
// }

// Reverse the whole string and then reverse the word

void reverseSentence(string s){

    reverse(s.begin(), s.end());
    cout<<"The reverse string : "<<s<<endl;
}

int main(){
    string s;
    
    cout<<"Enter the sentennce : ";
    getline(cin, s);

    reverseSentence(s);
}