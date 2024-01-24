#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll h,w,x,y,k;
    ll time;
    ll cx,cy;
    ll nx,ny;
    ll c = 0;
    ll dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    cin >> h >> w >> x >> y >> k;
    bool obs[h][w];
    queue<pair<pair<ll,ll>,ll>> q;
    vector<vector<bool>> v(h,vector<bool>(w,0));
    ll res[k+1];
    
    for (ll i = 0; i < h; i++){
        for (ll j = 0; j < w; j++){
            cin >> obs[i][j];
        }
    }

    v[x][y] = 1;
    q.push({{x,y},0});
    while (!q.empty() && q.front().second <= k){
        cx = q.front().first.first;
        cy = q.front().first.second;
        time = q.front().second;
        q.pop();

        for (auto d : dir){
            nx = cx + d[0];
            ny = cy + d[1];

            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (obs[nx][ny]) continue;
            if (!v[nx][ny]){
                v[nx][ny] = 1;
                q.push({{nx,ny},time+1});
            }
        }
        c++;
        if (!time) res[0] = 1;
        else res[time] = c - res[time-1];
    }
    if (q.empty()){
        for (ll i = 1; i <= k-time; i++){ 
			res[time+i] = c - res[time-!(i%2)];
        }
    }
    for (ll i = 1; i <= k; i++) {
        cout << res[i] << "\n";
    }
}