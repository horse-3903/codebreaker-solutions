#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    // state : dp[i][j] is the most taste from arr[0..j], if taking element arr[j], i = 1, else i = 0
    vector<vector<ll>> dp(2, vector<ll>(n));

    // base case : not take first one
    dp[0][0] = 0;

    // base case : take first one
    dp[1][0] = arr[0];

    for (ll i = 1; i < n; i++){
        // transition : dp[1][i] = if take arr[i], check for state of not taking arr[i-1]
        dp[1][i] = dp[0][i-1] + arr[i];

        // transition : dp[1][i] = if no take arr[i], check for max state of taking or not taking arr[i-1]
        dp[0][i] = max(dp[1][i-1], dp[0][i-1]);
    }

    cout << max(dp[0][n-1], dp[1][n-1]);
}