#include<bits/stdc++.h>
using namespace std;

bool issubsquence(string s, string t){
    int s_pointer = 0, t_pointer = 0;

    while(s_pointer < s.size() && t_pointer < t.size()){
        if(s[s_pointer] == t[t_pointer]) s_pointer++;
        
        t_pointer++;
    }

    return s_pointer == s.size();
}

int main(){
    string s, t;

    cout<<"Enter the 1st string : ";
    cin>>s;

    cout<<"Enter the 2nd string : ";
    cin>>t;

    if(issubsquence(s, t)){
        cout<<"The string is subsequence !"<<endl;
    } 
    else{
        cout<<"The string is not the subsequence !!"<<endl;
    }
}