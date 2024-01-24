#include <bits/stdc++.h>
using namespace std;

#define maxsize 150000

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    bool p[maxsize];
    memset(p, true, sizeof(p)); 

    vector<int> v;

    for (int i = 2; i*i <= maxsize; i++) { 
        if (p[i]){ 
            for (int j = i*i; j <= maxsize; j += i) {
                p[j] = false;
            }
        } 
    }

    for (int i = 2; i < maxsize; i++){
        if (p[i]){
            v.push_back(i);
        }
    }

    cout << v[n-1];
}