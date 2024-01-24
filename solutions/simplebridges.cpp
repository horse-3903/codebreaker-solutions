#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, k, s, e;
    cin >> n >> k >> s >> e;
    if ((abs(s - e) % k) == 0){
        cout << "Yes";
    } else {
        cout << "No";
    }
}