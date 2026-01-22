#include<bits/stdc++.h>
using namespace std;

void compress(vector<char> chars){
    int idx = 0;
    int n = chars.size();

    for(int i=0; i<n; i++){
        int count = 0;
        char ch = chars[i];

        while(i<n && chars[i]==ch){
            count++;
            i++;
        }
        if(count == 1) chars[idx++] = ch;

        else{
            chars[idx++] = ch;
            string str = to_string(count);
            for(char digit : str) chars[idx++] = digit;
        }
        i--;
    }
    cout << "[";
    for(int i = 0; i < chars.size(); i++){
        cout << "'" << chars[i] << "'";
        if(i != chars.size() - 1){
            cout << ", ";
        }
    }
    cout << "]"<<endl;;
    cout<<"The size of the compress characters : "<<idx<<endl;
}

int main(){
    int n;

    cout<<"Enter the number : ";
    cin>>n;

    vector<char> ch(n);

    for(int i=0; i<n; i++){
        cout<<"Enter the charcters : ";
        cin>>ch[i];
    }

    compress(ch);
}