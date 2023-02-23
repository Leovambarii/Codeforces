#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long r, b, d, diff, least;
        cin >> r >> b >> d;
        diff = abs(r-b);
        least = min(r, b);
        if((diff+least-1)/least <= d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}