#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
	int t, x1, y1, x2, y2;
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> x1 >> y1 >> x2 >> y2;
		
		int time = abs(y2-y1) + abs(x2-x1);

        if ((x1 == x2) || (y1 == y2)){
            cout << time << endl;
        } else {
            cout << time + 2 << endl;
        }
	}
}