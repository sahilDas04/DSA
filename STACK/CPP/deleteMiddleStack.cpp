#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>& st, int  count, int size){
    // Base Case 
    int n  = size/2; 
    if(count == n){
        st.pop();
        return;
    }

    int num = st.top();
    st.pop();

    // Recursive call
    solve(st, count+1, size);

    st.push(num);
}

void printStack(stack<int> st){
    cout<<"STACK  :   "<<endl;

    while(!st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> st;
    int n, value;

    cout<<"Enter the number : ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter the element : ";
        cin>>value;

        st.push(value);
    }

    printStack(st);
    
    cout<<"After removing the middle element : "<<endl;

    int count  = 0;
    solve(st, count, n);

    printStack(st);
}