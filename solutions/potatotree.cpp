#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);
    ull n,q,tmp,idx;
    cin >> n >> q;
    unordered_set<ull> us;
    ull arr[n];

    for (idx = 0; idx < n; idx++){
        cin >> tmp;
        us.insert(tmp);
        arr[idx] = us.size();
    }
    for (idx = 0; idx < q; idx++) {
        cin >> tmp;
        cout << arr[tmp-1] << " ";
    }
}