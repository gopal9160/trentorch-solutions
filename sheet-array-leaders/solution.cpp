#include <bits/stdc++.h>
using namespace std;
#define ll long long
template <class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    for (size_t i = 0; i < v.size(); i++) os << (i ? ", " : "") << v[i];
    return os << "]";
}

vector<long long> arrayLeaders(vector<long long> a) {
    ll n = a.size();
    if(n==0){
        return {};
    }
    ll maxi = a[n-1]; 
    vector<ll> res;
    res.push_back(a[n-1]);
    for(int i = n-2; i >= 0; i--){
        if(a[i]>maxi){
            res.push_back(a[i]);
        }
        maxi = max(maxi,a[i]);
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    cout << arrayLeaders(vector<long long>{16, 17, 4, 3, 5, 2}) << endl;
    return 0;
}
