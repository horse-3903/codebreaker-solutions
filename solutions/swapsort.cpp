#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    int p = 0;
    int l, r;
    cin >> n;

    int arr[n+1];
    arr[0] = 0;
    int sorted[n+1];
    arr[0] = 0;
    
    set<int> unsorted_idx;
    set<int> sorted_idx;

    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    copy(arr, arr+n+1, sorted);
    sort(sorted, sorted+n+1);

    for (int i = 1; i <= n; i++){
        if (arr[i] == sorted[i]) sorted_idx.insert(i);
        else unsorted_idx.insert(i);
    }

    cin >> q;

    for (int i = 0; i < q; i++){
        cin >> l >> r;
        swap(arr[l], arr[r]);

        if (arr[l] == sorted[l]){
            unsorted_idx.erase(unsorted_idx.lower_bound(l));
            sorted_idx.insert(l);
        } else if (arr[r] == sorted[l]) {
            sorted_idx.erase(sorted_idx.lower_bound(l));
            unsorted_idx.insert(l);
        }

        if (arr[r] == sorted[r]){
            unsorted_idx.erase(unsorted_idx.lower_bound(r));
            sorted_idx.insert(r);
        } else if (arr[l] == sorted[r]) {
            sorted_idx.erase(sorted_idx.lower_bound(r));
            unsorted_idx.insert(r);
        }

        if (unsorted_idx.empty()) p++;
    }

    cout << p << endl;
    for (int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
}
