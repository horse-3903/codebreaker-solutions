#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll v,e;
    cin >> v >> e;
    ll dist[v+1];
    fill(dist,dist+v+1,(ll)1e9);
    vector<pair<ll,ll>> g[v+1];
    for (ll i = 0; i < e; i++){
        ll x,y,w;
        cin >> x >> y >> w;
        g[x].push_back({y,w});
        g[y].push_back({x,w});
    }
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    pq.push({0,1});

    dist[1] = 0;
    while (!pq.empty()){
        ll cd = pq.top().first;
        ll cn = pq.top().second;
        pq.pop();

        if (dist[cn] < cd) continue;

        for (ll i = 0; i < g[cn].size(); i++){
            ll nn = g[cn][i].first;
            ll nw = g[cn][i].second;
            if (dist[cn] + nw < dist[nn]){
                dist[nn] = dist[cn] + nw;
                pq.push({dist[nn],nn});
            }
        }
    }
    cout << (dist[v] == (ll)1e9 ? -1 : dist[v]);
}