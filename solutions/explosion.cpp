#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    long long a,b;
    cin >> n >> a >> b;
    pair<long long,long long> arr[n];
    for (long long i = 0; i < n; i++){
        long long x,y;
        cin >> x >> y;
        long long dist = abs(x - a) + abs(y - b);
        arr[i] = {dist,i+1};
    }

    sort(arr,arr+n);
    
    for (long long i = 0; i < n; i++){
        cout << arr[i].second << " ";
    }
}