#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    vector<long long> v;
    long long s = 0;
    long long m = 0;
    priority_queue<long long> pq;

    // storing values
    while (v.size() < n){
        long long t;
        cin >> t;
        v.push_back(t);
    }

    // top k values into pq
    for (long long i = 0; i < k; i++){
        pq.push(v[i]);
    }

    // update values
    s += pq.top();
    m += pq.top();
    pq.pop();

    for (long long i = k; i < n; i++){
        pq.push(v[i]);
        s += pq.top();
        if (s > m) {
            m = s;
        }
        pq.pop();
    }

    while (!pq.empty()){
        s += pq.top();
        m = max(m,s);
        pq.pop();
    }
    
    if (m > 0) cout << m;
    else cout << 0;
}