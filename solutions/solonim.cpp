#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int tmp, s = 0;
    
    for (int i = 0; i < n; i++){
        cin >> tmp;
        s += tmp;
    }

    if (s % 2) cout << "No";
    else cout << "Yes";
}