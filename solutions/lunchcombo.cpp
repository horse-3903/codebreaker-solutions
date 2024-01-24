#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll m, s, k;
    cin >> m >> s >> k;
    ll a[m], b[s];

    for (ll i = 0; i < m; i++){
        cin >> a[i];
    }
    for (ll i = 0; i < s; i++){
        cin >> b[i];
    }

    sort(a, a+m);
    sort(b, b+s);

    ll c = 0;
    for (ll i = 0; i < m; i++){
        ll u = lower_bound(b, b+k, d-a[i]) - b;
        c += u;
    }
}