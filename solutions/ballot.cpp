#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c,t;
    cin >> n >> c;
    set<pair<int,int>> s;

    for (int i = 0; i < n; i++){
        cin >> t;
        s.insert({t,i+1});
    }

    for (int i = 0; i < c; i++){
        cin >> t;
        auto it = s.lower_bound({t,-1});
        if (it == s.begin()){
            cout << (*it).second << "\n";
            s.erase(it);
        } else if (it == s.end()){
            it--;
            cout << (*it).second << "\n";
            s.erase(it);
        } else {
            auto it2 = it;
            it2--;
            auto it1 = (abs((*it).first-t) >= abs((*it2).first-t)) ? it2 : it;
            cout << (*it1).second << "\n";
            s.erase(it1);
        }
    }
}