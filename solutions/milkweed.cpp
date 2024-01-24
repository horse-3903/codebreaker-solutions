#include <bits/stdc++.h>
using namespace std;

int x = 100;
int y = 100;
int mx,my;
int w = 0;
vector<char> g[100005];
vector<vector<bool>> v(x,vector<bool>(y,0));
int dir[8][2] = {{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1}};

int traverse(int startx, int starty){
    queue<pair<pair<int,int>,int>> q;
    q.push({{startx,starty},0});
    int week;
    while (!q.empty()){
        int cx = q.front().first.first;
        int cy = q.front().first.second;
        week = q.front().second;
        q.pop();
        for (auto d : dir){
            int nx = cx + d[0];
            int ny = cy + d[1];

            if (nx < 0 || nx >= x || ny < 0 || ny >= y) continue;
            if (g[ny][nx] == '*') continue;
            else if (!v[ny][nx]){
                v[ny][nx] = 1;
                q.push({{nx,ny},week+1});
                
            }
        }
    }
    return week;
}

int main(){
    cin >> x >> y >> mx >> my;
    mx--;
    my = y - my;
    for (int i = 0; i < y; i++) for (int j = 0; j < x; j++){
        char ip;
        cin >> ip;
        g[i].push_back(ip);
    }
    cout << traverse(mx,my);
}