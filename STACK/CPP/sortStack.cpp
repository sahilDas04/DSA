#include<bits/stdc++.h>
using namespace std;

void printStack(stack<int> st){
    cout<<"STACK  :   "<<endl;

    while(!st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }
    cout<<endl;
}

void sortedInsert(stack<int>&s, int num){
    if(s.empty() || s.top() < num){
        s.push(num);
        return ;
    }

    int n = s.top();
    s.pop();

    sortedInsert(s, num);
    s.push(n);
}

stack<int> sortStack(stack<int>&s){
    if(s.empty()){
        return s;
    }

    int num  = s.top();
    s.pop();

    sortStack(s);
    sortedInsert(s, num);

    return s;
}

int main(){
    int n, value;
    stack<int> st;

    cout<<"Enter the number : ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter the element : ";
        cin>>value;
        st.push(value);
    }

    printStack(st);

    cout<<"After sorting the stack"<<endl;

    sortStack(st);

    printStack(st);
}