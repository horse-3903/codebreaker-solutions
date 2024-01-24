#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll x, ll y, ll p){
    if (y == 0) return 1;
    ll h = power(x,y/2,p);
    h *= h;
    if (y % 2) h *= x;
    return h % p;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n,x,y,p;
    cin >> n;

    for (ll i = 0; i < n; i++) {
        cin >> x >> y >> p;
        cout << power(x,y,p) << "\n";
    }
}