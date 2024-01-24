#include <bits/stdc++.h>
using namespace std;

int n,m,a,b,c = 0;
vector<int> fr[505];
vector<bool> vis(505,0);

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        fr[a].push_back(b);
        fr[b].push_back(a);
    }
    vis[1] = 1;
    for (int i : fr[1]){
        if (!vis[i]){
            vis[i] = 1;
            c++;
        }
        for (int j : fr[i]){
            if (!vis[j]){
                vis[j] = 1;
                c++;
            }
        }
    }
    cout << c;
}