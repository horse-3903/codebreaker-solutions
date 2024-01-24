#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, p;
    cin >> n >> p;

    ll c[n];
    set<ll> s;

    for (ll i = 0; i < n; i++){
        cin >> c[i];
        
        if (i) c[i] += c[i-1];
    }

    for (ll i = 0; i < n; i++){
        if (c[i] <= p){
            s.insert(i+1);
        } else {
            auto it = lower_bound(c, c+n, c[i]-p);
            s.insert(i-distance(c, it));
        }
    }

    if (s.empty()) cout << n;
    else cout << *--s.end();
}