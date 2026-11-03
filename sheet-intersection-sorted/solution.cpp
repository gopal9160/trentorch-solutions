#include <bits/stdc++.h>
using namespace std;
#define ll long long
template <class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    for (size_t i = 0; i < v.size(); i++) os << (i ? ", " : "") << v[i];
    return os << "]";
}

vector<long long> intersectionSorted(vector<long long> a, vector<long long> b) {
    vector<ll> res;
    map<ll,ll> mp1,mp2;
    for(ll x : a) mp1[x]++;
    for(ll x : b) mp2[x]++;
    for(auto it : mp1){
        ll x = it.first;
        if(mp2.count(x)){
            ll num = x;
            for(ll i = 0; i < min(mp1[x],mp2[x]); i++){
                res.push_back(num);
            }
        }
    }
    return res;
}

int main() {
    cout << intersectionSorted(vector<long long>{1, 2, 2, 3}, vector<long long>{2, 2, 2, 4}) << endl;
    return 0;
}
