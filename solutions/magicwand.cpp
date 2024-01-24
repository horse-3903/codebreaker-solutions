#include <bits/stdc++.h>
using namespace std;

int dir[4][2] = {{0,-1},{0,1},{-1,0},{1,0}};
vector<vector<bool>> v(500,vector<bool>(500,0));
int g[500][500];
int h,w,x,y,t;

void traverse(int startx, int starty){
    queue<pair<int,int>> q;
    q.emplace(startx,starty);
    v[startx][starty] = 1;

    while (!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (auto d : dir){
            int nx = cx + d[0];
            int ny = cy + d[1];

            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (abs(g[nx][ny] - g[startx][starty]) > t) continue;
            else if (!v[nx][ny]){
                v[nx][ny] = 1;
                q.emplace(nx,ny);
            }
        }
    }
}

int main(){
    cin >> h >> w >> x >> y >> t;
    x--;
    y--;
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cin >> g[i][j];
        }
    }
    traverse(x,y);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) cout << v[i][j];
        cout << "\n";
    }
}