#include <bits/stdc++.h>
using namespace std;

template <class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    for (size_t i = 0; i < v.size(); i++) os << (i ? ", " : "") << v[i];
    return os << "]";
}

vector<long long> dedupeSorted(vector<long long> a) {
    vector<long long> res;
    if(a.size() != 0){
        res.push_back(a[0]);
    }else{
        return {};
    }
    
    for(long long i = 1; i < a.size(); i++){
        if(res.back() != a[i]){
            res.push_back(a[i]);
        }
    }
    return res;
}

int main() {
    cout << dedupeSorted(vector<long long>{1, 1, 2, 2, 2, 3}) << endl;
    return 0;
}
