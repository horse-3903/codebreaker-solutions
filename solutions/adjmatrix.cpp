#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cin >> n >> e;
    int p[55][55] = {0};
    for (int i = 0; i < e; i++){
        int a,b;
        cin >> a >> b;
        p[a-1][b-1] = 1;
        p[b-1][a-1] = 1;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << p[i][j];
        }
        cout << "\n";
    }
}