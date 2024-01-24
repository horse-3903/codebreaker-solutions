#include <bits/stdc++.h>
using namespace std;

int m,n,s,x,y;
int ans = 0;
vector<pair<int,int>> sp;
queue<pair<pair<int,int>,int>> q;
bool v[1005][1005];
int dir[8][2] = {{-1,0},{-1,1},{-1,-1},{0,1},{0,-1},{1,0},{1,-1},{1,1}};

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> m >> n >> s;
    for (int i = 0; i < s; i++){
        cin >> x >> y;
        x--; y--;
        sp.push_back({x,y});
    }

    for (auto a : sp) {
        q.push({a,1});
        v[a.first][a.second] = 1;
    }

    while(!q.empty()){
        int cx = q.front().first.first;
        int cy = q.front().first.second;
        int s = q.front().second;
        ans = max(ans,s);
        q.pop();

        for (auto d : dir){
            int nx = cx + d[0];
            int ny = cy + d[1];

            if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
            else if (!v[nx][ny]){
                v[nx][ny] = 1;
                q.push({{nx,ny},s+1});
            }
        }
    }
    cout << ans;
}