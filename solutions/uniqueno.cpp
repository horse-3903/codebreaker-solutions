#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_set<string> s;

    for (int i = 0; i < n; i++){
        string t;
        cin >> t;
        s.insert(t);
    }

    cout << s.size();
}