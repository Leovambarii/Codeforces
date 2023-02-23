#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, sum=0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a;
            sum += a;
        }
        if(sum == n)
            cout << 0 << endl;
        else if(sum < n)
            cout << 1 << endl;
        else
            cout << sum-n << endl;
    }
    return 0;
}

