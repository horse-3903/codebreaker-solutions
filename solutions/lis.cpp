#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,t;
vector<ll> v;

int main(){
    cin >> n;
    for (ll i = 0; i < n; i++){
        cin >> t;
        if (v.empty() || t > v[v.size()-1]) v.push_back(t);
        else {
            v[lower_bound(v.begin(),v.end(),t) - v.begin()] = t;
        }
    }
    cout << v.size();
}