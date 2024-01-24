#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin >> n >> h;
    int arr[h];
    multiset<int> ms;
    for(int i =0; i< h;i++){
        ms.insert(0);
        arr[i] = 0;
    }
    for(int i = 0; i < n; i++){
        int opt,k;
        cin >> opt >> k;
        k %= h;
        if(!opt){
            ms.erase(ms.find(arr[k]));
            arr[k]--;
            ms.insert(arr[k]);
        } else {
            ms.erase(ms.find(arr[k]));
            arr[k]++;
            ms.insert(arr[k]);
        }  
        cout << *(--ms.end()) << endl;
    }
}