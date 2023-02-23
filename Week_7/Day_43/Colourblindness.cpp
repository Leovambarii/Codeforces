#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string line1, line2;
        cin >> n >> line1 >> line2;
        bool is_fine = true;
        for(int i=0; i<n; i++) {
            if((line1[i]=='R' && line2[i]!='R') || (line2[i]=='R' && line1[i]!='R')) {
                is_fine = false;
                break;
            }
        }
        if(is_fine)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}