#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n=s.size(), sol=-1;
        if((s[n-1]-'0')%2 == 0)
            sol = 0;
        else if((s[0]-'0')%2 == 0)
            sol = 1;
        else {
            bool flag = false;
            for(int i=0; i<n; i++) {
                if((s[i]-'0')%2 == 0) {
                    flag = true;
                    break;
                }
            }
            if(flag)
                sol = 2;
        }
        cout << sol << endl;
    }
    return 0;
}