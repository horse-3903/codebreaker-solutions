#include <bits/stdc++.h>
using namespace std;

int k,n,tmp;
vector<int> val,s;
vector<int> g[10005];
bool valid = 1;
int m,vis[10005],prc[10005];
string inp;

void dfs(int start){
    if (vis[start]) return;
    prc[start] = 1;
    vis[start] = 1;
    for (int i = 0; i < g[start].size(); i++){
        if (!prc[g[start][i]]) dfs(g[start][i]);
        else {
            valid = 0;
            return;
        }
    }
    s.push_back(start);
    prc[start] = 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> k >> n;
    for (int i = 0; i < n; i++){
        val.clear();
        cin >> inp;
        tmp = 0;
        m = -1; // 0 if '>' before ',', 1 else 
        for (int j = 0; j < inp.length(); j++){
            if (inp[j] != '>' && inp[j] != ','){
                tmp = (tmp * 10) + (inp[j] - 48);
                continue;
            } else if (m < 0){
                if (inp[j] == '>') m = 0;
                else m = 1;
            }
            val.push_back(tmp);
            tmp = 0;
        }
        val.push_back(tmp);
        if (!m){
            g[val[0]].push_back(val[1]);
            g[val[0]].push_back(val[2]);
        } else {
            g[val[0]].push_back(val[2]);
            g[val[1]].push_back(val[2]);
        }
    }
    for (int i = 1; i <= k; i++){
        dfs(i);
        if (!valid) break;
    }
    if (valid){
        reverse(s.begin(),s.end());
        for (auto i : s) cout << i << " ";
    } else cout << 0;
}