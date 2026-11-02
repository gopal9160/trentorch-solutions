#include <bits/stdc++.h>
using namespace std;

template <class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    for (size_t i = 0; i < v.size(); i++) os << (i ? ", " : "") << v[i];
    return os << "]";
}

vector<long long> unionSorted(vector<long long> a, vector<long long> b) {
    long long i = 0, j = 0, n = a.size(), m = b.size();
    
    vector<long long> res;
    while(i < n && j < m){
        if(a[i]<=b[j] &&  (res.empty() || res.back() != a[i])){
            res.push_back(a[i]);
            i++;
        }else if(b[j]<=a[i] && (res.empty() || res.back() != b[j])){
            res.push_back(b[j]);
            j++;
        }else{
            if(a[i]<=b[j]) i++;
            else j++;
        }
    }
    while(i < n){
        if(res.empty() || a[i] != res.back()){
            res.push_back(a[i]);
        }
        i++;
    }
    while(j < m){
        if(res.empty() || b[j] != res.back()){
            res.push_back(b[j]);
        }
        j++;
    }
    return res;
}

int main() {
    cout << unionSorted(vector<long long>{1, 2, 2, 4}, vector<long long>{2, 3, 4, 5}) << endl;
    return 0;
}
