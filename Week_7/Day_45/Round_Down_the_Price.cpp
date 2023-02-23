#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long int m, d=1, power=0;
        cin >> m;
        while(m > d) {
            power++;
            d = pow(10, power);
        }
        if(m == d) {
            cout << 0 << endl;
            continue;
        } else {
            d = d/10;
            cout << m-d << endl;
        }
    }
    return 0;
}