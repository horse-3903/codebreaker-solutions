#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, m, t;
    cin >> n >> m;

    ll a[n];
    set<ll> b;

    for (ll i = 0; i < n; i++){
        cin >> a[i];
    }

    for (ll i = 0; i < m; i++){
        cin >> t;
        b.insert(t);
    }

    reverse(a, a+n);

    for (ll i = 0; i < n; i++){
        if (*b.lower_bound(a[i]) == a[i]) cout << a[i] << " ";
        else continue;
    }
}