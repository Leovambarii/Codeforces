#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, n, sum=0, count=0;
        cin >> a >> b >> n;
        while(sum <= n) {
            if(a>b) {
                b += a;
                sum = b;
            } else {
                a += b;
                sum = a;
            }
            count++;
            if(sum > n)
                break;
        }
        cout << count << endl;
    }

    return 0;
}