#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, count=0;
    cin >> n >> m;
    for(int i=0; i*i<=n && i<=m; i++) {
        if(i+pow(n-i*i, 2) == m)
            count++;
    }
    cout << count << endl;
    return 0;
}