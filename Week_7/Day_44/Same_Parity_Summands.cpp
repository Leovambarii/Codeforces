#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k, rest;
        cin >> n >> k;
        rest = n-(k-1);
        if(rest > 0 && rest%2 == 1 ) {
            cout << "YES" << endl;
            for(int i=0; i<k-1; i++)
                cout << 1 << " ";
            cout << rest << endl;
            continue;
        }
        rest = n-2*(k-1);
        if(rest > 0 && rest%2 == 0 ) {
            cout << "YES" << endl;
            for(int i=0; i<k-1; i++)
                cout << 2 << " ";
            cout << rest << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}