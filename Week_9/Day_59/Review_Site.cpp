#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, r, count_1=0;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> r;
            if(r != 2)
                count_1++;
        }
        cout << count_1 << endl;
    }
    return 0;
}