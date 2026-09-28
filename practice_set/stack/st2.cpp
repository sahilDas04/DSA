#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int *arr;
        int size;
        int top;
    
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){
        if(top < size - 1){
            top++;
            arr[top] = data;
        }
        else{
            cout<<"The stack is overflow!!!"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"The stack is underflow!!!"<<endl;
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

    int peek(){
        if(top < size){
            return arr[top];
        }
    }

    void display(){
        if(isempty()){
            cout<<"Stack is empty!"<<endl;
            return;
        }
        cout<<"Stack elements: [";
        for(int i = top; i >= 0; i--){
            cout << arr[i];
            if(i > 0) cout << ", ";
        }
        cout<<"]"<<endl;
    }
};

int main(){
    Stack st(5);
    int choice, data;
    
    while(true){
        cout<<"\n=== Stack Menu ==="<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Peek"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin >> choice;
        
        switch(choice){
            case 1:
                cout<<"Enter data to push: ";
                cin >> data;
                st.push(data);
                break;
            case 2:
                st.pop();
                cout<<"Element popped!"<<endl;
                break;
            case 3:
                if(!st.isempty()){
                    cout<<"Top element: "<<st.peek()<<endl;
                }
                else{
                    cout<<"Stack is empty!"<<endl;
                }
                break;
            case 4:
                st.display();
                break;
            case 5:
                cout<<"Exiting..."<<endl;
                return 0;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
}