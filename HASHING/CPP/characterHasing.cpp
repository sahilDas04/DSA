#include<bits/stdc++.h>
using namespace std;

void characterHash(string s, char n){
    // vector<int> hashTab(256);
    map<char, int> hashTab;

    for(int i=0; i<s.size(); i++){
        hashTab[s[i]]++;
    }

    for(auto it : hashTab){
        cout<<it.first<< "->" <<it.second << endl;
    }

    cout<<"The character is reapeated "<<hashTab[n]<<endl;
}

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    char c;
    cout<<"Enter the character : ";
    cin>>c;

    characterHash(s, c);
}

// lowercase a - z = 26 asii value a = 97 a-a = 0, b-a = 1, c-a = 2   hashTab[s[i] - 'a']++;

// in case ascii values total 256 array size usi 256 declare kar de toh a-a;