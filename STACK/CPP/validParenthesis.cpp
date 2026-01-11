#include<bits/stdc++.h>
using namespace std;

bool isvalid(string s){
    stack<char> st;

    for(int i=0; i<s.length(); i++){
        char ch = s[i];

        // If opening brackets push to stack
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }

        else{
            // If the closing brackets match with the stack top element
            if(!st.empty()){
                char chtop = st.top();

                if((ch == ')' && chtop == '(') || (ch == '}' && chtop == '{') || (ch == ']' && chtop == '[')){
                    st.pop();
                }

                else{
                    return false;
                }
            }

            else{
                return false;
            }
        }
    }
    if(st.empty()) return true;
    else return false;
}

int main(){
    string s;

    cout<<"Enter only the parenthesis  (), {}, [] : ";
    cin>>s;

    cout<<isvalid(s)<<endl;

}

// This  will  return only 1 and 0 true for 1 and false for 0