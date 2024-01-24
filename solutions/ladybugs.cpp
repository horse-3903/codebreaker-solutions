#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll arr[n], ans = 0;
    vector<ll> dp(n,0);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    dp[0] = 1;

    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            if ((arr[j] & arr[i]) == 0){
                dp[i] = max(dp[i], dp[j]+1);
            } else {
                dp[i] = max(dp[i], (ll)1);
            }
        }
        ans = max(dp[i], ans);
    }
    cout << ans;
}