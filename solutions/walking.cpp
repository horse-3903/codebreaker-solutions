#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int l, n;
    map<int,int> m;
    cin >> l >> n;
    vector<vector<int>> dp(n, vector<int>(n-1, 0));

    for (int i = 0; i < n; i++){
        int t, v;
        cin >> t >> v;
        m[t] = v;
    }

    // start from the back (?)
    for (int i = 0; i < n - 2; i++){
        map<int,int>::iterator a, b;
        int at, av, bt, bv;
        map<int,int>::iterator it = --m.end();
        
        a = next(it, -1);
        b = next(it, -2);
        at = a->first;
        av = a->second;
        bt = b->first;
        bv = b->second;


    }
}