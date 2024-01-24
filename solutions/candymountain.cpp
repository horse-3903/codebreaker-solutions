#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    cin >> n >> k;
    ll arr[n];

    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    // state : dp[i] is min val of the max candy gotten from trip of arr[0...i]
    vector<ll> dp(n, INT_MAX);

    // base case : dp[0] = arr[0]
    dp[0] = arr[0];

    // transition
    for (ll i = 1; i < n; i++){
        for (ll j = i-1; j >= 0 && j >= i-k; j--){
            if (dp[j] <= dp[i]){
                dp[i] = max(arr[i], dp[j]);
            } 
        }
    }

    ll ans = INT_MAX;

    for (ll i = n-1; i >= 0 && i >= n-k; i--){
        ans = min(ans, dp[i]);
    }

    cout << ans;
}
