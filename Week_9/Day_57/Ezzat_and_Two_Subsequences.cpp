#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, biggest=INT_MIN;
        cin >> n;
        double sum=0;
        for (int i=0 ; i<n; i++) {
            cin >> a;
            sum += a;
            biggest = max(biggest, a);
        }
        double fb = (sum-biggest)/(n-1);
        cout << fixed << setprecision(9) << (double)biggest+fb << endl;
    }
    return 0;
}