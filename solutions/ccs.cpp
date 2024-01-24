#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q,x,y;
    cin >> n >> q;
    set<int> s;

    for (int i = 0; i < q; i++){
        string ins;
        cin >> ins >> x;
        if (ins == "SLEEP"){
            s.insert(x);
        } else if (ins == "WAKE"){
            s.erase(x);
        } else {
            cin >> y;
            auto it = s.lower_bound(x);
            if ((s.empty()) || (*it < x) || (*it > y)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}