#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k, sol;
        cin >> n >> k;
        sol = n;
        for(long long i=1; i*i<=n; i++) {
            if(n%i == 0) {
                if(i <= k)
                    sol = min(sol, n/i);
                if(k >= n/i)
                    sol = min(sol, i);
            }
        }
        cout << sol << endl;
    }
    return 0;
}