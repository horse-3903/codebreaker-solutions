#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    int sx,sy; // bear start
    int fx,fy; // fire start
    int cx,cy; // current pos
    int nx,ny; // next pos
    int ans = INT_MAX;
    cin >> r >> c;
    char g[r][c];
    int f[r][c],b[r][c];
    vector<vector<bool>> v(r,vector<bool>(c,0));
    int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> g[i][j];
            if (g[i][j] == 'F'){
                f[i][j] = 0;
                fx = i;
                fy = j;
            } else if (g[i][j] == 'B'){
                sx = i;
                sy = j;
            }
        }
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            f[i][j] = abs(i-fx) + abs(j-fy);
        }
    }
    if (!sx || !sy || sx == r-1 || sy == c-1){
        if (f[sx][sy] < 2) cout << -1;
        else cout << 2;
    }
    else {
        b[sx][sy] = 2;
        v[sx][sy] = 1;
        queue<pair<int,int>> q;
        q.push({sx,sy});
        while (!q.empty()){
            cx = q.front().first;
            cy = q.front().second;
            q.pop();
            for (auto d : dir){
                nx = cx + d[0];
                ny = cy + d[1];
                if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
                if (g[nx][ny] == '@' || f[nx][ny] < b[cx][cy]+2) continue;
                if (!v[nx][ny]){
                    if (!nx || !ny || nx == r-1 || ny == c-1) {
                        ans = min(ans,b[cx][cy]+2);
                    } else {
                        b[nx][ny] = b[cx][cy]+2;
                        v[nx][ny] = 1;
                        q.push({nx,ny});
                    }
                }
            }
        }
        if (ans != INT_MAX) cout << ans;
        else cout << -1;
    }
}