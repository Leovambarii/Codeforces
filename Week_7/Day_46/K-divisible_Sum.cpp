#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long int n, k, div, modulo;
        cin >> n >> k;
        if(n==1) 
            cout << k << endl;
        else if(n==k) 
            cout << 1 << endl;
        else if(n < k) {
            div = k/n;
            modulo = k%n;
            if(modulo != 0)
                div++;
            cout << div << endl;
        } else {
            div = n/k;
            modulo = n%k;
            if(modulo != 0)
                div++;
            k *= div;
            div = k/n;
            modulo = k%n;
            if(modulo != 0)
                div++;
            cout << div << endl;
        }
    }
    return 0;
}