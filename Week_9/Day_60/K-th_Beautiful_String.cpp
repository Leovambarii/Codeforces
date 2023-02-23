#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k, pos;
        cin >> n >> k;
        string s(n, 'a');
        for(long long i=n-2; i>=0; i--) {
            pos = n-1-i;
            if(k <= pos) {
                s[i] = 'b';
                s[n-k] = 'b';
                cout << s << endl;
                break;
            }
            k -= pos;
        }
    }
    return 0;
}