#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, m, x, col, row;
        cin >> n >> m >> x;
        col = x/n;
        row = x%n;
        if(x%n != 0)
            col++;
        if(row == 0)
            row = n;
        cout << (row-1)*m+col << endl;
    }
    return 0;
}