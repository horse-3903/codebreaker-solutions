#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w,m;
    int a,b,c;
    int ans = 0;
    cin >> h >> w;
    vector<int> g[h];
    int opt[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> m;
            g[i].push_back(m);
        }
    }
    for (int i = 0; i < w; i++) {
        opt[0][i] = g[0][i]; 
    }
    for (int i = 1; i < h; i++){
        for (int j = 0; j < w; j++){
            a = b = 0;
            if (j-1 > 0) a = opt[i-1][j-1];
            if (j+1 < w) b = opt[i-1][j+1];
            c = opt[i-1][j];
            opt[i][j] = g[i][j] + max(max(a,b),c);
        }
    }
    for (auto i : opt[h-1]) ans = max(ans,i);
    cout << ans;
}