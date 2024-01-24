#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,t,i;
    cin >> n;
    int arr[n],res[n];
    stack<pair<int,int>> s;
    bool d;

    for (i = 0; i < n; i++){
        cin >> t;
        arr[i] = t;
    }

    for (i = n-1; i >= 0; i--){
        d = false;
        while(!s.empty()){
            if (s.top().first > arr[i]){
                d = true;
                res[i] = s.top().second;
                break;
            } 
            s.pop();
        }
        if (!d) res[i] = 0;
        s.push({arr[i],i+1});
    }

    for (i = 0; i < n; i++){
        cout << res[i] << " ";
    }
    
}