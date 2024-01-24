#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    ull n, k;
    cin >> n >> k;

    ull a[n], m[n];

    for (ull i = 0; i < n; i++){
        cin >> a[i];
        if (i) a[i] += a[i-1];
    }
    
    for (ull i = 0; i < k; i++){
        
    }
}