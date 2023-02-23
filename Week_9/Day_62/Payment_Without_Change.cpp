#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        long int a, b, n, S;
        cin >> a >> b >> n >> S;
        if(S-min(S/n, a)*n <= b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}