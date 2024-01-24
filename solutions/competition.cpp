#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, t;
    int m = 0;

    cin >> n >> a >> b;

    pair<int, int> s[n];

    for (int i = 0; i < n; i++){
        cin >> t;
        s[i] = {t, 0};
    }

    for (int i = 0; i < n; i++){
        cin >> s[i].second;
    }

    sort(s, s+n, greater<>());

    for (int i = 0; i < a; i++){
        m += s[i].first;
    }

    cout << m;
}