#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,s,a,b;
    ll ans = INT_MAX;
    vector<ll> g(1000005,0);
    vector<bool> v(1000005,0);
    cin >> n >> s;

    for (int i = 0; i < s; i++){
        cin >> a >> b;
        g[a] = b;
    }
    deque<pair<ll,ll>> dq;
    dq.push_back({1,0});
    while (!dq.empty()){
        auto cp = dq.front();
        dq.pop_front();
        if (cp.first == n) {
            ans = min(ans,cp.second);
        } else if (!v[cp.first]){
            v[cp.first] = 1;
            if (!g[cp.first]){
                for (int i = 1; i <= 6; i++){
                    ll np = cp.first + i;
                    if (np > n) {
                        np = n;
                        break;
                    }
                    dq.push_back({np,cp.second+1});
                }
            } else {
                ll np = g[cp.first];
                dq.push_front({np,cp.second});
            }
        }
    }
    if (ans != INT_MAX) cout << ans;
    else cout << -1;
}