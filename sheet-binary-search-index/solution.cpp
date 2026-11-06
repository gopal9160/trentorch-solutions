#include <bits/stdc++.h>
using namespace std;

long long binarySearchIndex(vector<long long> a, long long target) {
    int n = a.size();
    int low = 0, high = n-1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(a[mid]==target){
            return mid;
        }else if(a[mid] > target){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    cout << binarySearchIndex(vector<long long>{-1, 0, 3, 5, 9, 12}, 9) << endl;
    return 0;
}
