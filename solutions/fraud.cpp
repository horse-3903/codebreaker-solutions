#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    bool e = true;

    int a[n], b[n];

    for (int i = 0; i < n; i++){
        cin >> a[n];
    }

    for (int i = 0; i < n; i++){
        cin >> b[n];
    }

    if (is_sorted(a, a+n)) cout << "YES";
    else cout << "NO";
}