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
                cout<<"Stack1 is underflow!!!"<<endl;
            }
        }

        void push2(int data){
            if(top2 - top1 > 1){
                top2--;
                arr[top2] = data;
            }
            else{
                cout<<"Stack2 is underflow!!"<<endl;
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
            if(top2 >= 0){
                int ans = arr[top2];
                top2++;
                return ans;
            }
            return -1;
        }

        void display(){
            cout<<"Stack1: ";
            if(top1>=0){
                for(int i=top1;i>=0;--i)
                    cout<<arr[i]<<" ";
            }
            else cout<<"Empty";
            cout<<"\n";

            cout<<"Stack2: ";
            if(top2<size){
                for(int i=top2;i<size;++i)
                    cout<<arr[i]<<" ";
            }
            else cout<<"Empty";
            cout<<"\n";
        }
};

int main(){
    TwoStack ts(5);

    ts.push2(10);
    ts.push2(20);
    ts.push2(30);

    cout<<"After pushing to Stack2:\n";
    ts.display();

    cout<<"Popped from Stack2: "<<ts.pop2()<<"\n";
    cout<<"After popping from Stack2:\n";
    ts.display();

    // Attempt to pop from Stack1 (will return -1 if empty)
    cout<<"Popped from Stack1: "<<ts.pop1()<<"\n";

    return 0;
}