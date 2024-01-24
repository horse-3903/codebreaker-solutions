#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    ull q,ins,t;
    queue<ull> qu;
    map<ull,ull> left;
    cin >> q;
    
    for (ull i = 0; i < q; i++){
        cin >> ins;
        if (ins == 1){
            cin >> t;
            qu.push(t);
        } else if (ins == 2){
            cin >> t;
            left[t]++;
        } else {
            while(left[qu.front()] > 0 && !qu.empty()){
                left[qu.front()]--;
                qu.pop();
            }
            cout << qu.front() << " ";
            qu.pop();
        }
    }
}