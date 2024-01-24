#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,f = 0;
    cin >> n >> m;
    vector<bool> g(n,0);
    for (long long i = 0; i < m; i++){
        long long a,b;
        cin >> a >> b;
        if (a == b) continue;
        g[a] = 1;
        g[b] = 1;
    }
    for (long long i : g) f += !i;
    cout << f;
}