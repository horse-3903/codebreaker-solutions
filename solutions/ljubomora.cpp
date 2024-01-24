#include <bits/stdc++.h>
using namespace std;

int child(int x, int m, int colour[]){
    int n = 0;
    for (int i = 0; i < m; i++){
        n += colour[i] / x;
        n += (colour[i] % x) ? 1 : 0;
    }
    return n;
}

int main(){
    int n,m;
    cin >> n >> m;
    int colour[m];
    for (int i = 0; i < m; i++){
        cin >> colour[i];
    }
    int l = 1;
    int r = 1e9;
    int ans;
    while (l <= r){
        int mid = (l + r) / 2;
        if (child(mid,m,colour) > n){
            ans = mid;
            l = mid + 1;
        } else {
            r = mid-1;
        }
    }
    cout << ans + 1;
}