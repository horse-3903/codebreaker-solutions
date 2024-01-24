#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll r,c;
    cin >> r >> c;
    vector<vector<ll>> v(r+1,vector<ll>(c+1,0));

    for (ll i = 1; i <= r; i++){
        for (ll j = 1; j <= c; j++){
            ll t;
            cin >> t;
            v[i][j] = t + v[i-1][j] + v[i][j-1] - v[i-1][j-1];
        }
    }
}