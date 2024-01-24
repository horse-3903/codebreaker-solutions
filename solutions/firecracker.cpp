#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a, s, e;
    cin >> n;

    vector<pair<int, int>> f;
    priority_queue<int, vector<int>, greater<>()> pq;

    a = s = 0;

    for (int i = 0; i < n; i++){
        cin >> s >> e;
        f.push_back({s, e});
    }

    for (auto i : f){
        cout << i.first << " " << i.second << endl;
    }
}