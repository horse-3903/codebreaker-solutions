#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int c = 0;
    int z = 0;

    for (char i : s){
        if (i == '(') c++;
        else c--;
        if (c == 0) z++;
        else if (c < 0) break;
    }

    cout << z;
    
}