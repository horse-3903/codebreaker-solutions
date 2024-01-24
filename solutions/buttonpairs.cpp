#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    vector<long> e,o;
    for (int i = 0; i < n; i++){
        long t;
        cin >> t;
        if (t % 2){
            o.push_back(t);
        } else {
            e.push_back(t);
        }
    }
    cout << o.size() * e.size();
}