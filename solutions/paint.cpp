#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t;

    cin >> n;

    vector<pair<int, int>> j;
    int c = 0;
    int d = 0;

    for (int i = 0; i < n; i++){
        cin >> t;
        j.push_back({0, t});
    }

    for (int i = 0; i < n; i++){
        cin >> j[i].first;
    }

    sort(j.begin(), j.end(), greater<>());

    for (int i = 0; i < n; i++){
        c += j[i].second + (j[i].first * d);
        d++;
    }

    cout << c;
}