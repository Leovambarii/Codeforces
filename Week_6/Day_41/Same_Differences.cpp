#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int n, j, count=0;
        cin >> n;
        map<int, long long int> mp;
        for(int i=0; i<n; i++) {
            cin >> j;
            count += mp[j-i];
            mp[j-i]++;
        }
        cout << count << endl;
    }
}