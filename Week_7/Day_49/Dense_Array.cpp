#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x, count=0;
        vector<int> v;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> x;
            v.push_back(x);
        }
        for(int i=0; i<n-1; i++) {
            float bigger = max(v[i], v[i+1]);
            float lower = min(v[i], v[i+1]);
            while(bigger/lower > 2) {
                bigger = ceil(bigger/2);
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}