#include<bits/stdc++.h>
using namespace std;

// Stack implementation using array 
class Stack{
    public:
        int *arr;
        int top;
        int size;
    
    Stack(int size){
        this -> size = size;
        arr = new int [size];
        top = -1;
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"The stack is overflow!!"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack is Underflow!!!"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty!!"<<endl;
        }       
    }

    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    
    cout<<"The peek element : "<<st.peek()<<endl;

    st.pop();
    st.pop();
    st.pop();

    cout<<"The peek element after pop : "<<st.peek()<<endl;

    if(st.isempty()){
        cout<<"Stack is empty !!!"<<endl;
    }
    else{
        cout<<"The staack is not empty !!"<<endl;
    }
    // Stack creation 
    // stack<int> s;

    // Stack push opration
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);

    // while(!s.empty()){
    //     cout<<"The pushed element  : "<<s.top()<<endl;
    //     s.pop();
    // }

    // Stack top operation
    // cout<<"The top element in the stack is : "<<s.top()<<endl;
}