#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a1, a2;
    int b1, b2;
    int c1, c2;

    cin >> n >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    b1 -= a1;
    b2 -= a2;
    c1 -= a1;
    c2 -= a2;

    if ((b1 < 0 && c1 < 0) || (b1 > 0 && c1 > 0)){
        if ((b2 < 0 && c2 < 0) || (b2 > 0 && c2 > 0)){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}