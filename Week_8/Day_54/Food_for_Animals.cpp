#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        if(a < x)
            c -= x-a;
        if(b < y)
            c -= y-b;
        if(c<0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}