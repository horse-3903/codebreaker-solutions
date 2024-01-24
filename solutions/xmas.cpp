#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, t;
    cin >> n;
    ll arr[n+1];
    
    for (ll i = 1; i <= n; i++){
        cin >> t;
        arr[t] = i;
    }

    for (ll i = 1; i <= n; i++){
        cout << arr[i] << endl;
    }
}