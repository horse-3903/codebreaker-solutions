#include <bits/stdc++.h>
using namespace std;
#define GMAX(a, b) (a > b ? a : b)

int main(){
    int n;
    unsigned long long c;
    bool nz = false;
    cin >> n;
    unsigned long long tmax = 0;
    for (int i = 0; i != n; i++){
        cin >> c;
        if (!c) continue;
        int ft = GMAX(c+i,c+n-i-1);
        tmax = GMAX(ft,tmax);
        nz = true;
    }
    if (!nz){
        cout << "0";
    } else {
        cout << tmax;
    }
}