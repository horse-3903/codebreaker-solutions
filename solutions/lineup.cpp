#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    
    ll l, r;
    l = r = 0;
    
    pair<ll, ll> a[n];

    for (ll i = 0; i < n; i++){
        a[i] = {0, 0};
        cin >> a[i].first >> a[i].second;
    }

    sort(a, a+n);
    cout << endl;

    for (ll i = 0; i < n; i++){
        cout << a[i].first << " " << a[i].second << endl;
    }
}