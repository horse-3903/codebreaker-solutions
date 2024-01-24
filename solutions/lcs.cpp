#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin >> a >> b;
    ll m = b.length();
    ll n = a.length();
    ll dp[n+5][m+5];

    for (ll i = 0; i <= n; i++){
        for (ll j = 0; j <= m; j++){
            if (!i || !j) dp[i][j] = 0;
            else if (a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
    cout << dp[n][m];
}