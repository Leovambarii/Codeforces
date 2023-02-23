#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s, sol;
        cin >> s;
        for(int i=0; i<n; i++) {
            if(s[i] == 'U')
                sol += 'D';
            else if(s[i] == 'D')
                sol += 'U';
            else
                sol += s[i];
        }
        cout << sol << endl;
    }
    return 0;
}