#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    unsigned long long s = 1;
    unsigned long long m = 1e9 + 9;
    
    a %= m;
    b %= m;
    c %= m;
    d %= m;
    e %= m;

    s *= a;
    s %= m;
    s *= b;
    s %= m;
    s *= c;
    s %= m;
    s *= d;
    s %= m;
    s *= e;
    s %= m;

    cout << s;
}