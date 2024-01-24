#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> v;
    v.push_back(0);
    for (ll i = 1; i <= n; i++){
        char tmp;
        cin >> tmp;
        ll val;
        if (tmp > 48 && tmp < 58) val = (ll) tmp - 48;
        else val = (ll) -2;

        if (v[i-1] < 0) v.push_back(val);
        else v.push_back(v[i-1]+val);
    }
    ll ans = v[0];
    for (ll i = 1; i <= n; i++) ans = max(v[i],ans);
    cout << ans << "\n";
}