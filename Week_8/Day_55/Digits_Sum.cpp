#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, count=0;
        cin >> n;
        int rest = n%10;
        if(rest != 9)
            cout << n/10 << endl;
        else
            cout << n/10+1 << endl;
    }

    return 0;
}