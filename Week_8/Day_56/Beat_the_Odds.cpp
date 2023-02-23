#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, a, even=0, odds=0;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> a;
            if(a%2 == 0)
                even++;
            else
                odds++;
        }
        cout << min(even, odds) << endl;
    }
    return 0;
}