#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> v;
    v.push_back(0);
    for (ll i = 1; i <= n; i++){
        ll tmp;
        cin >> tmp;
        if (v[i-1] > 0) v.push_back(tmp);
        else v.push_back(v[i-1]+tmp);
    }
    ll ans = v[1];
    for (ll i = 1; i <= n; i++) {
        ans = min(v[i],ans);
    }
    cout << ans;
}