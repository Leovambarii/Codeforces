#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, n, m;
        cin >> x >> n >> m;
        while(n-- && x>0) {
            x = min(x/2+10, x);
        }
        if(x-10*m <= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}