#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, x, y, n, a1, b1, a2, b2;
        cin >> a >> b >> x >> y >> n;
        a1 = max(a-n, x);
        b1 = max(y, b-(n-(a-a1)));
        a2 = max(b-n, y);
        b2 = max(x, a-(n-(b-a2)));
        cout << min(a1*b1, a2*b2) << endl;
    }
    return 0;
}