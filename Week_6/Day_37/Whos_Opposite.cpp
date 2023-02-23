#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        int diff = abs(a-b);
        int val = diff*2;
        if(a>val || b>val || c>val)
            cout << -1 << endl;
        else {
            int sol = c+diff;
            if(sol > val)
                sol = c-diff;
            cout << sol << endl;
        }
    }

    return 0;
}