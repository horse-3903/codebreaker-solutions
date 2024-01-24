#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, v;
    cin >> n;
    for (ll i = 0; i < n; i++){
        cin >> v;
        if (v > 1099){
            cout << "YES" << endl;
        } else {
            while (true){
                if (v < 0){
                    cout << "NO" << endl;
                    break;
                } else if (!(v % 11)){
                    cout << "YES" << endl;
                    break;
                } else {
                    v -= 111;
                }
            }
        }
    }
}