#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;
        if(k == n*m-1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}