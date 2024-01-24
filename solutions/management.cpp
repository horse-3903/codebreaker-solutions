#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int d = 0;
    cin >> n;
    vector <long long> v;

    for (int i = 0; i < n-1; i++){
        long long t;
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(),v.end());
    
    for (int i = 1; i < n+1; i++){
        int s = 0;
        for (int j = d; j < n; j++){
            if (v[j] == i) s += 1;
            else {
                d = j;
                break;
            }            
        }
        cout << s << endl;
    }
}