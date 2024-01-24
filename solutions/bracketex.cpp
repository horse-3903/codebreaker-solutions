#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n;
    cin >> n;
    if (n == 0) cout << "Valid";
    else {
        string s;
        cin >> s;
        bool v = true;
        stack<char> st;

        for (char i : s){
            if (i == '(') st.push(')');
            else if (i == '[') st.push(']');
            else if (i == '{') st.push('}');
            else if (!st.empty()){
                if (i == st.top()) st.pop();
                else {
                    v = false;
                    break;
                }
            } else {
                v = false;
                break;
            }
        }

        if (!v) cout << "Invalid";
        else {
            if (st.empty()) cout << "Valid"; 
            else cout << "Invalid";
        }
    }
}
