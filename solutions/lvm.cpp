#include <bits/stdc++.h>
using namespace std;
string ins[1005];
int num[1005];
int main() {
    int n;
    cin >> n;
    for (int a = 0; a < n; a++) {
        string b;
        cin >> b;
        ins[a] = b;
        if(b == "PUSH" || b == "IFZERO"){
            int c;
            cin >> c;
            num[a] = c;
        }
    }
    stack <int> lvm;
    int reg = 0, pos = 0;
    while(pos != n){
        string cur = ins[pos];
            if(cur == "PUSH"){
            lvm.push(num[pos]);
        } else if(cur == "STORE") {
            reg = lvm.top();
            lvm.pop();
        } else if(cur == "LOAD") {
            lvm.push(reg);
        } else if(cur == "PLUS") {
            int cal = lvm.top();
            lvm.pop();
            cal += lvm.top();
            lvm.pop();
            lvm.push(cal);
        } else if(cur == "TIMES") {
            int cal = lvm.top();
            lvm.pop();
            cal *= lvm.top();
            lvm.pop();
            lvm.push(cal);
        } else if (cur == "IFZERO") {
            if(lvm.top() == 0) {
                pos = num[pos];
                pos--;
            }
            lvm.pop();
        } else {
            cout << lvm.top();
            break;
        }
       pos++;
    }
}

        

        
