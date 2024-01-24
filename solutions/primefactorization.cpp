#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, p;
    cin >> n;

    vector<pair<ll, ll>> v;

    p = 0;

    while (!(n % 2)){
        p++;
        n /= 2;
    }

    if (p) v.push_back({2, p});

    for (ll i = 3; i <= n; i += 2){
        p = 0;
        while (!(n % i)){
            p++;
            n /= i;
        }
        if (p) v.push_back({i, p});
    }

    for (auto i : v){
        cout << i.first << "^" << i.second << endl;
    }
}