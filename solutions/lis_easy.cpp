#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int ans = 0;
    cin >> n;
    int s[n],lis[n];

    for (int i = 0; i < n; i++){
        cin >> s[i];
        if (i == 0) lis[i] = 1;
        else {
            int maxj = -1;
            int maxlisj = lis[0];
            for (int j = 0; j < i; j++){
                if (s[j] < s[i]) {
                    maxlisj = max(maxlisj,lis[j]);
                    if (maxlisj == lis[j]) maxj = j;
                }
            }
            if (maxj == -1) lis[i] = 1;
            else lis[i] = lis[maxj] + 1;
        }
    }
    for (int i = 0; i < n; i++){
        ans = max(ans,lis[i]);
    }
    cout << ans;
}