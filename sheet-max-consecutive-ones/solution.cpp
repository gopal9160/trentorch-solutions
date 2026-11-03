#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long maxConsecutiveOnes(vector<long long> a) {
    ll n = a.size();
    if(n==0) return 0;
    ll len = 0, ans = 0;
    for(ll i = 0; i < n; i++){
        if(a[i]==1){
            len++;
        }else{
            ans = max(len,ans);
            len = 0;
        }
    }
    ans = max(ans,len);
    return ans;
}

int main() {
    cout << maxConsecutiveOnes(vector<long long>{1, 1, 0, 1, 1, 1}) << endl;
    return 0;
}
