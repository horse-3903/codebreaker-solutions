#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    int res = 0;
    unordered_map <string,int> mp;
    cin >> n;
    for (int i = 0; i < n; i++){
        string t;
        int s;
        cin >> t >> s;
        mp[t] = s;
    }
    cin >> c;
    for (int i = 0; i < c; i++){
        string t;
        cin >> t;
        res += mp[t];
    }
    cout << floor(res / c);
}