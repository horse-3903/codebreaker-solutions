#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,r = 0;
    cin >> n;
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        mp[t]++;
    }
    for (auto i : mp){
        if (i.first < i.second) r += i.second - i.first;
        else if (i.first > i.second) r += i.second;
    }
    cout << r;
}