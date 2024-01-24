#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, s;
    cin >> n >> s;

    bool p[n];

    vector<ll> e;

    ll o, z, a, l;
    o = z = a = l = 0;

    for (ll i = 0; i < n; i++){
        cin >> p[i];

        if (p[i]){
            if (z && a) e.push_back(z);
            o++;
            z = 0;
        } else {
            if (o){
                a += o;
                l++;
            }
            z++;
            o = 0;
        }
    }

    if (o){
        a += o;
        l++;
    }

    if (l - s){
        sort(e.begin(), e.end());
        for (ll i = 0; i != l-s; i++){
            a += e[i];
        }
    }

    cout << a;
}