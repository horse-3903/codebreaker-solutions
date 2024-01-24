#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ull n,q;
    cin >> n >> q;
    ull arr[n+1];
    arr[0] = 0;
    for (ull i = 1; i <= n; i++){
        ull t;
        cin >> t;
        arr[i] = t + arr[i-1];
    }
    for (ull i = 0; i < q; i++){
        ull s,e;
        cin >> s >> e;
        cout << arr[e] - arr[s-1] << "\n";
    }
}