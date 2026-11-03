#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long pivotIndex(vector<long long> a) {
    ll n = a.size();
    if(n==0){
        return -1;
    }
    vector<ll> suff(n);
    suff[n-1] = a[n-1];
    for(ll i = n-2; i >= 0; i--){
        suff[i] = a[i]+suff[i+1];
    }
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        if(sum==(suff[i]-a[i])){
            return i;
        }else{
            sum += a[i];
        }
    }
    
    return -1;
}

int main() {
    cout << pivotIndex(vector<long long>{1, 7, 3, 6, 5, 6}) << endl;
    return 0;
}
