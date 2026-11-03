#include <bits/stdc++.h>
using namespace std;

long long longestSubarraySumK(vector<long long> a, long long k) {
    int n = a.size();
    int sum = 0, ans = 0, j = 0;
    for(int  i = 0; i < n; i++){
        sum += a[i];
        while(sum>k){
            sum -= a[j];
            j++;
        }
        if(sum==k){
           ans = max(ans, i-j + 1);
        }
    }
    return ans;
}

int main() {
    cout << longestSubarraySumK(vector<long long>{1, 2, 3, 1, 1, 1, 1}, 3) << endl;
    return 0;
}
