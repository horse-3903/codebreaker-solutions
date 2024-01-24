#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,m,arr[1000005];

bool valid(ll x){
    ll sum = 0;
    ll sn = 0;
    for (ll i = 1; i <= n; i++){
        if (arr[i] > x) return false;
        else if (sum + arr[i] <= x) sum += arr[i];
        else {
            sum = arr[i];
            sn++;
        }
    }
    sn++;
    if (sn <= m) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) cin >> arr[i];
    ll l = 1;
    ll r = (ll)1e15;
    ll ans;
    while (l <= r){
        ll mid = (l + r) / 2;
        if (valid(mid)) {
            ans = mid;
            r = mid - 1;
        } else l = mid + 1;
    }
    cout << ans;
}