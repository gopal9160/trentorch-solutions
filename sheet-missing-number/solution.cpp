#include <bits/stdc++.h>
using namespace std;

long long missingNumber(vector<long long> a) {
    long long n = a.size();
    long long total = accumulate(a.begin(), a.end(), 0LL);
    long long sum = (n*(n+1)) / 2;
    long long ans = sum-total;
    return ans;
}

int main() {
    cout << missingNumber(vector<long long>{3, 0, 1}) << endl;
    return 0;
}
