#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ull n, s;
    string p, b;
    cin >> n;

    unordered_set<string> o;

    for (ull i = 0; i < n; i++){
        cin >> p >> b;

        s = o.size();
        o.insert(p+" "+b);
        
        if (o.size() == s) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}