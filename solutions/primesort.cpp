#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, c = 1;
vector<bool> checkp(1000005,1);
vector<ll> primes;
vector<bool> vis(1000005,0);
vector<ll> pos(1000005,0);
vector<ll> val(1000005,0);

void dfs (ll start){
    if (start*primes[primes.size()-1] < (ll)1e6){
        for (ll p : primes){
            if (!vis[start*p]){
                dfs(start*p);
                vis[start*p] = 1;
                c++;
                pos[start*p] = c;
            }
        }
    }
}

bool cmp (ll a, ll b){
    return pos[a] < pos[b];
}

int main(){
    // input values
    cin >> n;
    for (ll i = 0; i < n; i++){
        cin >> val[i];
    }
    // get primes
    for (ll i = 2; i*i <= (ll)1e6; i++) if (checkp[i]) for (ll j = i*i; j <= (ll)1e6; j += i) checkp[j] = 0;
    for (ll i = 2; i*i <= (ll)1e6; i++) if (checkp[i]) primes.push_back(i);
    pos[1] = 1;
    dfs(1);
    sort(val.begin(),val.end(),cmp);
}