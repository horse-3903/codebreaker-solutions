#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    deque<int> dq;

    cin >> n;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        if (i % 2) (n % 2) ? dq.push_back(t) : dq.push_front(t);
        else (n % 2) ? dq.push_front(t) : dq.push_back(t);
    } 

    for (int i : dq){
        cout << i << " ";
    }
}