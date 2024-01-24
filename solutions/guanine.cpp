#include <bits/stdc++.h>
using namespace std;

int main(){
  deque<string> dq;
  int n;
  vector<string> v;
  cin >> n;
  for (int i = 0; i < n; i++){
      string ins,sval;
      int ival;
      cin >> ins;
      if (ins == "ADD_BACK"){
          cin >> sval;
          dq.push_back(sval);

      } else if (ins == "ADD_FRONT"){
          cin >> sval;
          dq.push_front(sval);

      } else if (ins == "SNIP_BACK"){
          cin >> ival;
          int l = dq.size() - ival - 1;
          for (int i = 0; i < l; i++){
            dq.pop_back();
          }

      } else if (ins == "SNIP_FRONT") {
          cin >> ival;
          for (int i = 0; i <= ival; i++){
            dq.pop_front();
          }

      } else if (ins == "QUERY") {
          cin >> ival;
          v.push_back(dq[ival]);
      }
  }

  for (auto i : v){
    cout << i << endl;
  }
}