#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,q,x,y,h,dh[100005];
vector<pair<ll,ll>> a[100005];
bool v[100005];

void dfs(ll start){
    for (ll i = 0; i < a[start].size(); i++){
        auto nb = a[start][i];
        cout << "\n" << nb.first << " " << nb.second << "\n";
        if (!v[nb.first]){
            v[nb.first] = 1;
            dh[nb.first] = dh[start] + nb.second;
            dfs(nb.first);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n-1; i++){
        cin >> x >> y >> h;
        a[x].push_back({y,h});
        a[y].push_back({x,-h});
    }
    v[1] = 1;
    dh[1] = 1;
    dfs(1);
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> x >> y;
        // cout << dh[y] - dh[x] << "\n";
    }
}