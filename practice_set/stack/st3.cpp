#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
        Node(int value){
            data = value;
            next = NULL;
        }
};

class Stack{
    private:
        Node* top;
    
    public:
        Stack(){
            top = NULL;
        }
        
        void push(int data){
            Node* newNode = new Node(data);
            newNode->next = top;
            top = newNode;
            cout<<"Element "<<data<<" pushed!"<<endl;
        }
        
        void pop(){
            if(top == NULL){
                cout<<"Stack is underflow!!!"<<endl;
                return;
            }
            Node* temp = top;
            cout<<"Element "<<top->data<<" popped!"<<endl;
            top = top->next;
            delete temp;
        }
        
        bool isEmpty(){
            return (top == NULL);
        }
        
        int peek(){
            if(top == NULL){
                cout<<"Stack is empty!"<<endl;
                return -1;
            }
            return top->data;
        }
        
        void display(){
            if(top == NULL){
                cout<<"Stack is empty!"<<endl;
                return;
            }
            cout<<"Stack elements (top to bottom): [";
            Node* temp = top;
            while(temp != NULL){
                cout << temp->data;
                if(temp->next != NULL) cout << ", ";
                temp = temp->next;
            }
            cout<<"]"<<endl;
        }
        
        ~Stack(){
            while(top != NULL){
                Node* temp = top;
                top = top->next;
                delete temp;
            }
        }
};

int main(){
    Stack st;
    int choice, data;
    
    while(true){
        cout<<"\n=== Stack (Linked List) Menu ==="<<endl;
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
                break;
            case 3:
                if(!st.isEmpty()){
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
