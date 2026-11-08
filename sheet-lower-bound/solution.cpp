#include <bits/stdc++.h>
using namespace std;

long long lowerBound(vector<long long> a, long long target) {
    int n = a.size();
    int low = 0, high = n-1, ans = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(a[mid] >= target){
            ans = mid;
            high = mid -1;
        }else if(a[mid] < target){
            low =mid +1;
        }
    }
    return (ans == -1) ? n : ans;
}

int main() {
    cout << lowerBound(vector<long long>{1, 2, 2, 2, 5}, 2) << endl;
    return 0;
}
