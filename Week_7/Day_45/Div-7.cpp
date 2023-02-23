#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n%7 != 0) {
            if(10 > n%10+7-n%7)
                n += 7-n%7;
            else
                n -= n%7;
        }
        cout << n << endl;
    }
    return 0;
}