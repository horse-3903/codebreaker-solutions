#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t, p;
    cin >> n >> t >> p;

    vector<vector<int>> a;
    vector<int> m;
    vector<pair<pair<int, int>, int>> f;
    int e, o;
    int s[t], b[n+1];

    a.push_back({});
    m.push_back(0);

    memset(s, 0, sizeof(s));

    for (int i = 1; i <= n; i++){
        m = {};
        for (int j = 0; j < t; j++){
            cin >> e;
            
            if (e) m.push_back(j);
            else s[j]++;
        }
        a.push_back(m);
    }

    for (int i = 1; i <= n; i++){
        o = 0;
        for (auto j : a[i]) o += s[j];
        f.push_back({{o, a[i].size()}, i});
    }

    sort(f.begin(), f.end(), [](pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){
        if (a.first == b.first) return a.second < b.second;
        else if (a.first.first == b.first.first) return a.first.second > b.first.second;
        else return a.first.first > b.first.first;
    });

    for (int i = 0; i < n; i++){
        if (f[i].second == p){
            cout << f[i].first.first << " " << i+1;
            break;
        }
    }
}