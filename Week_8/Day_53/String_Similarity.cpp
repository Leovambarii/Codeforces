#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        for(int i=0; i<2*n-1; i+=2)
            cout << s[i];
        cout << endl;
    }
    return 0;
}