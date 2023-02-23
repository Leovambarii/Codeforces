#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        if(n == 1)
            cout << "YES" << endl;
        else if(s=="00" || s=="11")
            cout << "NO" << endl;
        else if(n >= 3)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}