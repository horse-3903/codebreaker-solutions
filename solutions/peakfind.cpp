#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = 0;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        m = max(m,t);
    }
    cout << m;
}