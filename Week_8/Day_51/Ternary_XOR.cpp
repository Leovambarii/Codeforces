#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string x, a, b;
        cin >> n >> x;
        for(int i=0; i<n; i++) {
            if(x[i] == '0') {
                a += '0';
                b += '0';
            } else if(x[i] == '1') {
                if(a >= b) {
                    a += '0';
                    b += '1';
                } else {
                    a += '1';
                    b += '0';
                }
            } else if(x[i] == '2') {
                if(a>b) {
                    a += '0';
                    b += '2';
                } else if(a == b) {
                    a += '1';
                    b += '1';
                } else {
                    a += '2';
                    b += '0';
                }
            }
        }
        cout << a << endl << b << endl;
    }
    return 0;
}