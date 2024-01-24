#include <bits/stdc++.h>
using namespace std;

int n,e;
vector<int> g[10005];

int main(){
    int n,e;
    cin >> n >> e;
    for (int i = 0; i < e; i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int i = 1; i <= n; i++){
        if (g[i].size() == 0) continue;
        for (int j = 0; j < g[i].size(); j++) cout << g[i][j] << " ";
        cout << "\n";
    }
}