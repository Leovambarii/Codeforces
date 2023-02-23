#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, k, ocur;
        cin >> a >> b >> k;
        if(k%2 == 1)
            ocur = (k/2)+1;
        else
            ocur = k/2;
        cout << (ocur*a)-((k-ocur)*b) << endl;
    }
    return 0;
}