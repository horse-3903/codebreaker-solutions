#include <bits/stdc++.h>
#include "sandd.h"
using namespace std;

int getPrice (int P){
    int start = 0;
    int end = P;
    while(start < end){
        int mid = (start + end) / 2;
        if (supply(mid) < demand(mid)) start = mid + 1;
        else end = mid;
    }
    return end;
}