#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long k, r, c, sqr, diff, sqr2;
        cin >> k;
        sqr = (long long)ceil(sqrt(k));
        sqr2 = sqr*sqr;
        diff = sqr2-k;
        if(diff < sqr) {
            c = diff+1;
            r = sqr;
        } else {
            c=sqr;
            r=2*sqr-diff-1;
        }
        cout << r << " " << c << endl;
    }
    return 0;
}