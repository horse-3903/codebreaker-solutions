#include <bits/stdc++.h>
using namespace std;
typedef long long ull;

bool valid(ull m, ull d, ull k){
    ull height = k; 
    ull inc = d;
    d++;
    while (height < m){
        if (k / inc < 1) return false;
        height += k / inc;
        inc *= d;
        d++;
    }
    return true;
}

int main(){
    ull m,d,k;
    cin >> m >> d;
    ull low = 0;
    ull high = m;
    while (low <= high){
        k = (low + high) / 2;
        // cout << low << " " << high << "\n";
        if (valid(m,d,k)){
            high = k - 1;
            if (!valid(m,d,high)) break;
        } else {
            low = k + 1;
        }
    }
    cout << k;
}