#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int max_grain = a+b;
        int min_grain = a-b;
        int max_package = c+d;
        int min_package = c-d;
        if(n*max_grain >= min_package && n*min_grain <= max_package)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}