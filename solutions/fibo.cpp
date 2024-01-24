#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long n;
	cin >> n;
	unsigned long long arr[n+1];
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 0; i < n+1; i++){
		if (i > 1) arr[i] = arr[i-1] % 998244353 + arr[i-2] % 998244353;
		cout << arr[i] % 998244353 << endl;
	}	
}