#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    queue <int> q;
    priority_queue <int> pq;
    multiset <int> ms;
    int m = 0; // 0 for largest, 1 for smallest
    int c[] = {1,1,1};
    cin >> n;

    for (int i = 0; i < n; i++){
        int t,v;
        cin >> t >> v;
        t--;

        if (!t){
            q.push(v);
            pq.push(v);
            ms.insert(v);
        } else {
            int tq = q.front();
            int tp = pq.top();
            auto tm = (m ? ms.begin() : (--ms.end()));
            m = !m;
            c[0] = c[0] ? (tq == v) : 0;
            c[1] = c[1] ? (tp == v) : 0;
            c[2] = c[2] ? (*tm == v) : 0;

            q.pop();
            pq.pop();
            ms.erase(tm);
        }
    }

    if (c[0] + c[1] + c[2] > 1) cout << "unsure";
    else if (c[0]) cout << "queue";
    else if (c[1]) cout << "priority queue";
    else if (c[2]) cout << "fickle minded priority queue";
}