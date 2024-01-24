#include <bits/stdc++.h>
using namespace std;

int r,c,s;
vector<int> g[45];
bool v[45][45];
queue<pair<int,int>> q;
int dir[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> r >> c;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            int t;
            cin >> t;
            if (i == 0 && j == 0) s = t;
            g[i].push_back(t);
        }
    }
    q.emplace(0,0);
    v[0][0] = 1;
    while (q.front() != make_pair(r-1,c-1)){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        pair<int,int> m = {0,0}; 

        for (int j = 0; j < 4; j++){
            int nx = cx + dir[j][0];
            int ny = cy + dir[j][1];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
            if (!v[nx][ny]){
                if (m == make_pair(0,0)) m = {dir[j][0],dir[j][1]};
                if (g[cx + m.first][cy + m.second] < g[nx][ny]) m = {dir[j][0],dir[j][1]};
            }
        }
        v[cx + m.first][cy + m.second] = 1;
        q.emplace(cx + m.first,cy + m.second);
        s += g[cx + m.first][cy + m.second];
    }
    cout << s;
}