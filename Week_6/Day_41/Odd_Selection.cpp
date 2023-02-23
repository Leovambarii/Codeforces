#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x, a, odd=0, even=0;
        cin >> n >> x;
        for(int i=0; i<n; i++) {
            cin >> a;
            if(a%2 == 0)
                even++;
            else
                odd++;
        }
        int odd_fit = min(even, x-1);
        int diff = x-odd_fit;
        if(diff%2 == 0)
            diff++;
        if(odd >= diff && diff <= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}