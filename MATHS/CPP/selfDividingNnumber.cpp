#include <bits/stdc++.h>
using namespace std;

bool isselfdividing(int n){
    int num = n;
    while(num > 0){
        int remainder = num % 10;
        num /= 10;
        if(remainder == 0 || n % remainder != 0)
            return false;
    }
    return true;
}

vector<int> selfDividing(int left, int right){
    vector<int> ans;
    for(int i = left; i <= right; i++){
        if(isselfdividing(i))
            ans.push_back(i);
    }
    return ans;
}

int main(){
    int n, m;
    cout << "Enter two numbers: ";
    cin >> n >> m;

    vector<int> ans = selfDividing(n, m);

    cout << "[";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i];
        if(i != ans.size() - 1) cout << ", ";
    }
    cout << "]";
}
