#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll h,w,a,b;
    char t;
    cin >> h >> w;
    vector<vector<bool>> o(h,vector<bool>(w,0));
    ll dp[h][w];
    for (ll i = 0; i < h; i++){
        for (ll j = 0; j < w; j++){
            cin >> t;
            o[i][j] = (t == 'X');
        }
    }
    for (ll i = 0; i < h; i++){
        for (ll j = 0; j < w; j++){
            if (!i && !j) dp[0][0] = 1;
            else if (o[i][j]) dp[i][j] = 0;
            else {
                a = b = 0;
                if (i-1 >= 0) a = dp[i-1][j];
                if (j-1 >= 0) b = dp[i][j-1];
                dp[i][j] = (a + b) % 1000000007;
            }
        }
    }
    cout << dp[h-1][w-1];
}