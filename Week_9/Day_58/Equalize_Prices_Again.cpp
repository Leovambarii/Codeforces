#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        long int n, a, sum=0;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> a;
            sum += a;
        }
        long long avg = ceil((double)sum/n);
        cout << avg << endl;
    }
    return 0;
}