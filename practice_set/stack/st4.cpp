#include<bits/stdc++.h>
using namespace std;

class TwoStack{
    int *arr;
    int top1;
    int top2;
    int size;

    public:
        TwoStack(int s){
            this -> size = s;
            top1 = -1;
            top2 = s;
            arr = new int[s];
        }
        
        void push1(int data){
            if(top1 - top2 > 1){
                top1++;
                arr[top1] = data;
            }
            else{
                cout<<"The stack1 is underflow!!!"<<endl;
            }
        }

        void push2(int data){
            if(top2 - top1 > 1){
                top2--;
                arr[top2] = data;
            }
            else{
                cout<<"Stack2 is underflow!!!"<<endl;
            }
        }

        int pop1(){
            if(top1 >= 0){
                int ans = arr[top1];
                top1--;
                return ans;
            }
            return -1;
        }

        int pop2(){
            if(top2 < size){
                int ans = arr[top2];
                top2++;
                return ans;
            }
            return -1;
        }
};

int main(){
    TwoStack st(10);

    st.push1(5);
    st.push1(10);
    st.push1(15);

    st.push2(100);
    st.push2(200);
    st.push2(300);

    cout << "Pop from stack1: " << st.pop1() << endl;
    cout << "Pop from stack2: " << st.pop2() << endl;

    st.push1(20);
    st.push2(400);

    cout << "Pop from stack1: " << st.pop1() << endl;
    cout << "Pop from stack1: " << st.pop1() << endl;

    cout << "Pop from stack2: " << st.pop2() << endl;
    cout << "Pop from stack2: " << st.pop2() << endl;

    return 0;
}