#include<bits/stdc++.h>
using namespace std;

bool isVowwel(char c){
    c = tolower(c);

    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

void vowCap(string s){
    for(int i=0; i<s.size(); i++){
        if(isVowwel(s[i])){
            s[i] = toupper(s[i]);
        }
    }
    cout<<"The vowels are converted to caapital letter : "<<s<<endl;
}

int main(){
    string s;

    cout<<"Enter the sentence : ";
    getline(cin, s);

    vowCap(s);
}