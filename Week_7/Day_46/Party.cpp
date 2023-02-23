#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sol=0, count=0;
    cin >> n;
    int a[n+1];
    for(int i=1; i<=n; i++)
        cin >> a[i];
    for(int i=1; i<=n; i++) {
        count = 0;
        int x = a[i];
        while(x != -1) {
            count++;
            x = a[x];
        }
        sol = max(sol, count);
    }
    cout << sol+1 << endl;
    return 0;
}