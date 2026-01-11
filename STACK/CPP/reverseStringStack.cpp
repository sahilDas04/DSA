#include<bits/stdc++.h>
using namespace std;

void stackReverse(string s){
    stack<char> st;

    for(int i=0; i<s.length(); i++){
        st.push(s[i]);
    }

    string ans = "";

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    cout<<"The reverse string : "<<ans<<endl;
}

int main(){
    string  str;

    cout<<"Enter the string  : ";
    cin>>str;

    stackReverse(str);
}