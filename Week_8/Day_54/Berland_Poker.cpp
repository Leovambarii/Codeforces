#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;
        if(m == 0)
            cout << 0 << endl;
        else {
            int jokers = min(m, n/k);
            int rest = ceil((double)(m-jokers)/(k-1));
            cout << jokers - rest << endl;
        }
    }
    return 0;
}