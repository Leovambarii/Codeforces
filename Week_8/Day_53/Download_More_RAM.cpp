#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        for(int i=0; i<n; i++) {
            while(k >= a[i]) {
                k += b[i];
                a[i] = INT_MAX;
                i = 0;
            }
        }
        cout << k << endl;
    }
    return 0;
}