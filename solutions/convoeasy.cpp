#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    ull n;
    cin >> n;
    stack<ull> s;
    map<ull,ull> m;

    for (ull i = 0; i < n; i++){
        ull ins,d;
        cin >> ins;
        if (ins == 1){
            cin >> d;
            s.push(d);

        } else if (ins == 2){
            cin >> d;
            m[d]++;
            if (!s.empty() && d == s.top()) s.pop();
        
        } else if (ins == 3){
            while (!s.empty() && m[s.top()] > 0){
                s.pop();
            }
            if (!s.empty()) s.pop();
        
        } else {         
            while (!s.empty() && m[s.top()] > 0){
                s.pop();
            }
            if (s.empty()) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
    }

}