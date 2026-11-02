#include <bits/stdc++.h>
using namespace std;

bool checkSortedRotated(vector<long long> a) {
    int n = a.size(), count = 0;
    for(int i = 1; i < n; i++){
        if(a[i]<a[i-1]){
            count++;
        }
    }
    if(a[n-1]>a[0]){
        count++;
    }
    return count <= 1;
}

int main() {
    cout << boolalpha << checkSortedRotated(vector<long long>{3, 4, 5, 1, 2}) << endl;
    return 0;
}
