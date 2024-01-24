#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    int c = 1;
    cin >> q;
    queue<int> l,r,arr[2];
    arr[0] = l;
    arr[1] = r;
    for (int i = 0; i < q; i++){
        int n;
        cin >> n;
        if (!(n-1)){
            int t;
            cin >> t;
            arr[c].push(t);
            while(arr[!c].size() < arr[c].size()){
                arr[!c].push(arr[c].front());
                arr[c].pop();
            }
        } else {
            c = !c;
            while(arr[!c].size() < arr[c].size()){
                arr[!c].push(arr[c].front());
                arr[c].pop();
            }
        }
    }

    while (!arr[!c].empty()){
        cout << arr[!c].front() << " ";
        arr[!c].pop();
    }
    while (!arr[c].empty()){
        cout << arr[c].front() << " ";
        arr[c].pop();
    }
}