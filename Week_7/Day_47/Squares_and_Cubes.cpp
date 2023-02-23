#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        set<long long> sol;
        cin >> n;
        long long s = sqrt(n);
        for(long long i=1; i<=s+1; i++) {
            long long pow_2 = pow(i, 2);
            long long pow_3 = pow(i, 3);
            if(pow_2 <= n)
                sol.insert(pow_2);
            if(pow_3 <= n)
                sol.insert(pow_3);
        }
        cout << sol.size() << endl;
    }
    return 0;
}