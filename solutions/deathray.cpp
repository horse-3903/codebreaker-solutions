#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unsigned long long n,q,t,l,i;
    cin >> n >> q;
    priority_queue<unsigned long long,vector<unsigned long long>,greater<unsigned long long>> pq;
    unsigned long long u = 0;
    unsigned long long d = 0;
    char c;
    
    for (i = 0; i < n; i++){
        cin >> t;
        pq.push(t);
    }

    for (i = 0; i < q; i++){
        cin >> c;
        if (c == 'A'){
            cin >> t;
            d += t;
            while (pq.top() <= d){
                u += 1;
                pq.pop();
            }
        } else if (c == 'B'){
            cin >> t;
            l = pq.top() + t;
            pq.pop();
            pq.push(l);
        }
    }

    cout << u;
}