#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll q,a = 0;
    multiset<ll> ms;
    cin >> q;
    for (ll i = 0; i < q; i++){
        ll t,x;
        cin >> t >> x;
        if (t == 1){
            if (*ms.lower_bound(x-a) == x-a) cout << "YES\n";
            else cout << "NO\n";
        } else if (t == 2){
            ms.insert(x-a);
        } else {
            a += x;
        }
    }
}