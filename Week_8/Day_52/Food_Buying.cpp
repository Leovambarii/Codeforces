#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, diff, count=0;
        cin >> x;
        while(true) {
            count += (x/10)*10;
            diff = x-(x/10)*10;
            x = (x/10)+diff;
            if (x<10) {
                count += x;
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}