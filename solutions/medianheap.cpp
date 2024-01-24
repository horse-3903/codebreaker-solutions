#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    multiset<int> a,b;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        if (s == "PUSH"){
            int x;
            cin >> x;
            if (a.empty()) a.insert(x);
            else if (a.size() > b.size()){
                if (*(--a.end()) > x){
                    b.insert(*(--a.end()));
                    a.erase(--a.end());
                    a.insert(x);
                } else {
                    b.insert(x);
                }
            } else {
                if (*b.begin() < x){
                    a.insert(*b.begin());
                    b.erase(b.begin());
                    b.insert(x);
                } else {
                    a.insert(x);
                }
            }
        } else {
            if (a.size() > b.size()){
                a.erase(--a.end());
            } else {
                a.erase(--a.end());
                a.insert(*b.begin());
                b.erase(b.begin());
            }
        }
    }
    for (auto i : a) cout << i << " ";
    for (auto i : b) cout << i << " ";
}