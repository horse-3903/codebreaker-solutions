#include <bits/stdc++.h>
using namespace std;

int n,k,v[1000005];
multiset<int> ms;

int diff(int st, int en){
    int ans = (v[en] - v[st]) + *ms.begin();
    return ans;
}

int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v,v+n);
    for (int i = 1; i < n-k; i++) ms.insert(v[i] - v[i-1]);
    int ans = diff(0,n-k-1);
    for (int i = 1; i < k+1; i++){
        ms.erase(ms.find(v[i]-v[i-1]));
        ms.insert(v[i+(n-k-1)]-v[i+(n-k-2)]);
        ans = min(diff(i,i+(n-k-1)),ans);
    }
    cout << ans;
}