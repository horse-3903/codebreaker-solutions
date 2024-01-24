#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int h[n+2];
    h[0] = 1e9;
    h[n+1] = 0;

    vector<int> dp(n+2,INT_MAX);
    // state : dp[i] = min. cost to get to that point

    // base case : cost to get to first is 0
    dp[0] = 0;

    for (int i = 1; i <= n; i++){
        cin >> h[i];
    }
    // transition : cost to get to i is the minimum of all dp[j] + (i-j)^2 when j < i and h[j] > h[i]
    for (int i = 1; i <= n+1; i++){
        for (int j = 0; j < i; j++){
            if (h[j] >= h[i]){
                dp[i] = min(dp[i], dp[j] + (i - j)*(i - j));
            }
        }
    }
    cout << dp[n+1];
}