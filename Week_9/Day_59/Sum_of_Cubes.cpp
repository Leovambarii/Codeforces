#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long x, cb, y;
        cin >> x;
        map<long long, long long> mp;
        for(long long i=1; i<10001; i++)
            mp[pow(i,3)]++;
        bool found = false;
        for(long long i=1; i<10001; i++) {
            if(mp.find(x-pow(i, 3)) != mp.end()) {
                found = true;
                break;
            }
        }
        if(found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}