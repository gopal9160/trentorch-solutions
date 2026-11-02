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
    for(long long i = 0; i < a.size(); i++){
        if(res.empty() || res.back() != a[i]){
            res.push_back(a[i]);
        }else{
            continue;
        }
    }
    return res;
}

int main() {
    cout << dedupeSorted(vector<long long>{1, 1, 2, 2, 2, 3}) << endl;
    return 0;
}
