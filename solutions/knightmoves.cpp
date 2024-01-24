#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,t;
pair<ll,ll> k,p;
ll dir[8][2] = {{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2}};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k.first >> k.second >> p.first >> p.second >> t;
    k.first--; k.second--; p.first--; p.second--;

    queue<pair<pair<ll,ll>,ll>> q;
    vector<vector<bool>> v(n,vector<bool>(n,0));
    vector<vector<bool>> fb(n,vector<bool>(n,0));
    for (ll i = 0; i < t; i++){
        ll a,b;
        cin >> a >> b;
        a--; b--;
        fb[a][b] = 1;
    }

    q.push({{k.first,k.second},0});
    v[k.first][k.second] = 1;
    ll minm = INT_MAX;

    while (!q.empty()){
        ll cx = q.front().first.first;
        ll cy = q.front().first.second;
        ll m = q.front().second;
        q.pop();

        for (auto d : dir){
            ll nx = cx + d[0];
            ll ny = cy + d[1];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (fb[nx][ny]) continue;
            if (nx == p.first && ny == p.second) {
                v[nx][ny] = 1;
                minm = min(minm,m+1);
                continue;
            } else if (!v[nx][ny]){
                v[nx][ny] = 1;
                q.push({{nx,ny},m+1});
            }
        }
    }
    if (v[p.first][p.second]) cout << minm;
    else cout << -1;
}