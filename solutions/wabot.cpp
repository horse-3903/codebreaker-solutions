#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,i,j,t,l,c;
    unsigned long long time = 0;
    cin >> n;
    vector<vector<unsigned long long>> v(3e6);
    for (i = 0; i < n; i++){
        cin >> l >> c;
        v[l].push_back(c);
    }
    for (i = 1; i < 3e6; i++){
        sort(v[i].begin(),v[i].end());
        if (v[i].size() > 1){
            for (j = 1; j < v[i].size(); j += 2){
                t = v[i][j] + v[i][j-1];
                time += t;
                v[i+i].push_back(t);
            }
        }
    }
    cout << time;
}