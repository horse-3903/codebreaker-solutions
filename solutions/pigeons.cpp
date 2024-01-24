#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int p = 0;

    for (int i = 0; i < m; i++){
        string s;
        cin >> s;
        if (s == "LAND"){
            p += 1;
        } else if (s == "LEAVE"){
            p -= 1;
        } else {
            p = 0;
        }

        if (p > n){
            cout << "PLAN REJECTED";
            return 0;
        }
    }
    cout << "PLAN ACCEPTED";
}