#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, d;
    cin >> n;

    ll cx[n], cy[n];

    ll x, y;

    for (ll i = 0; i < n; i++){
        cin >> cx[i] >> cy[i];
    }

    sort(cx, cx+n);
    sort(cy, cy+n);

    cout << cx[n/2] << " " << cy[n/2];
}