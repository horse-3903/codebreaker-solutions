#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull n,c,k;
multiset<ull> t,g,b;

int main(){
    cin >> n >> c >> k;
    ull p[n];
    for (ull i = 0; i < n; i++){
        cin >> p[i];
        if (i <= k) t.insert(p[i]);
    }

    auto it = t.rbegin();
    ull ans = 0;
    for (ull i = 0; i < c; i++) {
        g.insert(*it);
        ans += *it;
        it++;
    }
    while (it != t.rend()){
        b.insert(*it);
        it++;
    }
    
    ull tmp = ans;
    for (ull i = 1; i < n-k; i++){
        // erasing value
        if (b.empty() || *(--b.end()) < p[i-1]){
            g.erase(g.find(p[i-1])); 
            tmp -= p[i-1];
        } else b.erase(b.find(p[i-1]));

        // insert value
        if (g.size() == c){
            if (*g.begin() > p[i+k]) b.insert(p[i+k]);
            else {
                g.insert(p[i+k]);
                tmp += p[i+k] - *g.begin();
                b.insert(*g.begin());
                g.erase(g.begin());
            }
        } else if (b.empty()){
            g.insert(p[i+k]);
            tmp += p[i+k];
        } else if (*(--b.end()) > p[i+k]){
            g.insert(*(--b.end())); 
            tmp += *(--b.end());
            b.erase(--b.end());
            b.insert(p[i+k]);
        } else {
            g.insert(p[i+k]);
            tmp += p[i+k];
        }

        ans = max(tmp,ans);
    }
    cout << ans;
}