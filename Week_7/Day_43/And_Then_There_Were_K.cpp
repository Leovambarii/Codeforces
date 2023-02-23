#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long int n, val=0, last_val=0;
        cin >> n;
        while(n > val) {
            last_val = val;
            val = 2*val+1;
        }
        cout << last_val << endl;
    }
    return 0;
}