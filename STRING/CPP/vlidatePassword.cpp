#include<bits/stdc++.h>
using namespace std;

bool validatePassword(string s){
    int n = s.length();

    if(n<8 || n>10) return  false;

    bool hasUpper = false;
    bool hasDigit = false;

    for(char c : s){
        if(isupper(c)) hasUpper = true;
        else if(isdigit(c)) hasDigit = true;
        else if(islower(c)) continue;
        else return false;
    }

    return hasUpper || hasDigit;
}

int main(){
    string s;

    cout<<"Enter the Password size id 8->10 and no special charcter are allowed and it must conntain 1 uppeCase and 1 lowerCase : ";
    cin>>s;

    bool ans = validatePassword(s);

    if(ans == 1){
        cout<<"The passwor is noice!!!!"<<endl;
    }
    else{
        cout<<"Tum mdhaarchood ho bsdk tumko padhna nhi ata h kya process hi password ka tum maadhrchood padhana sikho"<<endl;
    }
}
