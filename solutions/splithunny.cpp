#include <bits/stdc++.h>
using namespace std;

int r,c,h = 0;
vector<char> g[10005];
vector<vector<bool>> v(100,vector<bool>(100,0));
int dir[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};

bool traverse(int startx, int starty){
    if (v[startx][starty]) return 0;
    queue<pair<int,int>> q;

    q.push({startx,starty});
    v[startx][starty] = 1;

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (auto d : dir){
            int nx = cx + d[0];
            int ny = cy + d[1];

            if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
            if (g[nx][ny] == '.') continue;
            if (!v[nx][ny]){
                v[nx][ny] = 1;
                q.emplace(nx,ny);
            }
        }
    }
    return 1;
}

int main(){
    cin >> r >> c;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            char tmp;
            cin >> tmp;
            g[i].push_back(tmp);
        }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (g[i][j] == 'H') h += traverse(i,j);
        }
    }

    cout << "Oh, bother. There are " << h << " pools of hunny.";
}