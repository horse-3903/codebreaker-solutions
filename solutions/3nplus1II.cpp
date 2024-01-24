#include <bits/stdc++.h>
using namespace std;

int main(){
    long long l,n;
    cin >> l >> n;
    long long arr[n];
    for (int i = 1; i < n; i++){
        if (l == 1){
            break;
        }
        else if (l % 2){
            l *= 3;
            l += 1;
            arr[i] = l;
        } else if (!(l % 2)) {
            l /= 2;
            arr[i] = l;
        }
    }
    if (!(l > 1)) cout << -1;
    else cout << arr[n-1];
}