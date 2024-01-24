#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, a, b, s = 0;
    cin >> n;

    for (ll i = 0; i < n; i++){
        cin >> a >> b;
        s += a * b;
    }

    cout << s;
}