#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;

    ll a[n], b[n];

    for (ll i = 0; i < n; i++){
        cin >> a[i];
    }

    for (ll i = 0; i < n; i++){
        cin >> b[i];
    }

    // state : dp[i] is max cost of stonk bought on day i
    ll dp[n];

    // base case : dp[n-1] is b[n-1]
    dp[n-1] = b[n-1];

    ll profit = a[n-1] * dp[n-1];

    // transition : dp[i] = max(dp[i+1], b[i])
    for (ll i = n-2; i >= 0; i--){
        dp[i] = max(dp[i+1], b[i]);
        profit += dp[i] * a[i];
    }
    cout << profit;
}