#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    st.push(3);
    st.push(5);
    st.push(4);

    cout << "[";

    while (!st.empty()) {
        cout << st.top();
        st.pop();

        if (!st.empty())
            cout << ", ";
    }

    cout << "]\n";
}                                   