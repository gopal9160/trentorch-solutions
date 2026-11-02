#include <bits/stdc++.h>
using namespace std;

template <class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    for (size_t i = 0; i < v.size(); i++) os << (i ? ", " : "") << v[i];
    return os << "]";
}

vector<long long> moveZeros(vector<long long> a) {
    int n = a.size(),j = 0;
    for(int i = 0; i < n; i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    return a;
}

int main() {
    cout << moveZeros(vector<long long>{0, 1, 0, 3, 12}) << endl;
    return 0;
}
