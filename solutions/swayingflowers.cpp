#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, t;
    cin >> n >> t;

    ll s = 0;

    for (ll i = 1; i <= n; i++){
        s += t / i;
    }

    cout << s;
}