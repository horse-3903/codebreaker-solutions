#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    ull n, x;
    cin >> n >> x;

    pair<ull, pair<ull, ull>> d[n];
    
    ull t;
    for (ull i = 0; i < n; i++){
        cin >> t;
        d[i] = {(ull) t/(ull)pow((ull) 2, i), {t, (ull) pow((ull) 2, i)}};
    }

    sort(d, d+n, greater<>());

    t = 0;
    for (ull i = 0; i < n; i++){
        t += d[i].second.first * (x / d[i].second.second);
        x %= d[i].second.second;

        if (x == 0) break;
    }

    cout << t;
}