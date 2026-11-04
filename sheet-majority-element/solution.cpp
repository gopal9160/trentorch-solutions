#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long majorityElement(vector<long long> a) {
    int n = a.size();
    map<ll,ll> mp;
    for(ll x : a) mp[x]++;
    for(auto &it : mp){
        if(it.second > (n/2)){
            return it.first;
        }
    }
    return -1;
}

int main() {
    cout << majorityElement(vector<long long>{2, 2, 1, 1, 2, 2, 3}) << endl;
    return 0;
}
