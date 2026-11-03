#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long singleNumber(vector<long long> a) {
    map<ll,ll> mp;
    for(ll x : a) mp[x]++;
    for(auto it : mp){
        if(it.second==1) return  it.first;
    }
    return 0;
}

int main() {
    cout << singleNumber(vector<long long>{4, 1, 2, 1, 2}) << endl;
    return 0;
}
